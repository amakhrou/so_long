/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tol3rd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:23:23 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/21 14:08:28 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ard(char **map)
{
	int	i;

	i = 0;
	while (map[0][i])
		i++;
	return (i);
}

int	tol(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

t_pos	*placement(char **map, char c)
{
	t_pos	*player;
	int		i;
	int		j;

	i = 0;
	player = malloc(sizeof(t_pos));
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == c)
			{
				player->y = i;
				player->x = j;
				return (player);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
