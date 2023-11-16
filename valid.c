/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:14:27 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/20 16:34:45 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check(char **map)
{
	if (!mrb3a(map))
	{
		ft_putstr_fd(RED"MISSING : mochkil f mrb3a\n", 2);
		return (0);
	}
	if (!dyra(map))
	{
		ft_putstr_fd(RED"MISSING : mochkil f up or down\n", 2);
		return (0);
	}
	if (!check_map_elements(map))
	{
		ft_putstr_fd(RED"MISSING : mochkil f map element\n", 2);
		return (0);
	}
	if (!jnb(map))
	{
		ft_putstr_fd(RED"MISSING : mochkil f jnab\n", 2);
		return (0);
	}
	return (1);
}

char	**passmap(char *path)
{
	char	**map;
	int		i;

	map = reads(path);
	if (!map)
	{
		ft_putstr_fd(YELLOW"WARNING MAP NOT FOUND OR EMPTY LINE\n", 2);
		exit(1);
	}
	if (!check(map))
	{
		ft_putstr_fd(YELLOW"WARNING MAP MISSING SMTHNG\n", 2);
		exit(1);
	}
	i = paths(path);
	if (i == 0)
	{
		ft_putstr_fd(YELLOW"WARNING PATH\n", 2);
		exit(1);
	}
	return (map);
}
