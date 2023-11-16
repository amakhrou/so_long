/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mrb3a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:29:16 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/20 16:34:11 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	mrb3a(char **map)
{
	size_t	l;
	int		i;

	i = 0;
	l = ard(map);
	while (map[i] != NULL)
	{
		if (ft_strlen(map[i]) != l)
		{
			ft_putstr_fd(RED"length Diff map must be rectangular.\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}
