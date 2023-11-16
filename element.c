/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:29:59 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/20 16:42:05 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_c(char **map)
{
	int	c_count;
	int	i;
	int	j;

	c_count = 0;
	i = 0;
	while (i < tol(map))
	{
		j = 0;
		while (j < ard(map))
		{
			if (map[i][j] == 'C')
				c_count++;
			j++;
		}
		i++;
	}
	return (c_count);
}

int	check_p(char **map)
{
	int	p_count;
	int	i;
	int	j;

	p_count = 0;
	i = 0;
	while (i < tol(map))
	{
		j = 0;
		while (j < ard(map))
		{
			if (map[i][j] == 'P')
				p_count++;
			j++;
		}
		i++;
	}
	return (p_count);
}

int	check_e(char **map)
{
	int	e_count;
	int	i;
	int	j;

	e_count = 0;
	i = 0;
	while (i < tol(map))
	{
		j = 0;
		while (j < ard(map))
		{
			if (map[i][j] == 'E')
				e_count++;
			j++;
		}
		i++;
	}
	return (e_count);
}

int	check_x(char **map)
{
	int	x_count;
	int	i;
	int	j;

	x_count = 1;
	i = 0;
	while (i < tol(map))
	{
		j = 0;
		while (j < ard(map))
		{
			if (map[i][j] != '0' && map[i][j] != '1' && map[i][j] != 'C'
				&& map[i][j] != 'P' && map[i][j] != 'E')
				x_count = 0;
			j++;
		}
		i++;
	}
	return (x_count);
}

int	check_map_elements(char **map)
{
	if (check_c(map) < 1)
	{
		ft_putstr_fd(RED"Map must contain at least one 'C'.\n", 2);
		return (0);
	}
	if (check_p(map) != 1)
	{
		ft_putstr_fd(RED"Map must contain exactly one 'P'.\n", 2);
		return (0);
	}
	if (check_e(map) != 1)
	{
		ft_putstr_fd(RED"Map must contain exactly one 'E'.\n", 2);
		return (0);
	}
	else if (check_x(map) != 1)
	{
		ft_putstr_fd(RED"Invalid character in map.\n", 2);
		return (0);
	}
	return (1);
}
