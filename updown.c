/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   updown.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:30:28 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/20 13:27:08 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	dyra(char **map)
{
	int	i;
	int	z;

	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != '1')
		{
			ft_putstr_fd(RED"No Wall UP.\n", 2);
			return (0);
		}
		i++;
	}
	z = 0;
	while (map[tol(map) - 1][z])
	{
		if (map[tol(map) - 1][z] != '1')
		{
			ft_putstr_fd(RED"ENo Wall DOWN.\n", 2);
			return (0);
		}
		z++;
	}
	return (1);
}
