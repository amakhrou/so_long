/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri9_m9ada.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:02:43 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/21 16:48:16 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	flood_fill(char **map, int x, int y, int *xy_map)
{
	if (x < 0 || x >= xy_map[0] || y < 0 || y >= xy_map[1]
		|| (map[x][y] != 'P' && map[x][y] != 'C' && map[x][y] != '0'))
		return ;
	map[x][y] = 'A';
	flood_fill(map, x + 1, y, xy_map);
	flood_fill(map, x - 1, y, xy_map);
	flood_fill(map, x, y + 1, xy_map);
	flood_fill(map, x, y - 1, xy_map);
}

int	fill_e(char **map, int x, int y)
{
	if (map[x + 1][y] == 'A' || map[x - 1][y] == 'A'
		|| map[x][y + 1] == 'A' || map[x][y - 1] == 'A')
		return (1);
	else
		return (0);
}

int	valid_e(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'E')
			{
				return (fill_e(map, i, j));
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	fill_c(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	paths(char *path)
{
	char	**str;
	int		pos_player[2];
	int		xy_map[2];
	int		check;
	int		frees;

	frees = 0;
	str = reads(path);
	pos_player[0] = check_px(str);
	pos_player[1] = check_py(str);
	xy_map[0] = tol(str);
	xy_map[1] = ard(str);
	flood_fill(str, pos_player[0], pos_player[1], xy_map);
	check = fill_c(str);
	if (check == 0 || valid_e(str) == 0)
	{
		ft_putstr_fd(RED"NO WAY TO 'C' OR 'E'.\n", 2);
		check = 0;
	}
	else
		check = 1;
	while (str[frees])
		free(str[frees++]);
	free(str);
	return (check);
}
