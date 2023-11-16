/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jnab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:37:17 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/20 16:20:03 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	jnb(char **jnb)
{
	int	x;
	int	i;
	int	l;

	x = 1;
	i = 0;
	while (jnb[x + 1])
	{
		l = ard(jnb);
		if (jnb[x][i] != '1')
		{
			ft_putstr_fd(RED"No Wall Left.\n", 2);
			return (0);
		}
		if (jnb[x][l - 1] != '1')
		{
			ft_putstr_fd(RED"No Wall Right.\n", 2);
			return (0);
		}
		x++;
	}
	return (1);
}
