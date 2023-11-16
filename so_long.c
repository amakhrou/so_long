/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:47:04 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/23 13:39:08 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_game	*long_s(t_map *map)
{
	t_game	*so_long;

	so_long = malloc(sizeof(t_game));
	if (!so_long)
		return (0);
	so_long->mlx = mlx_init();
	so_long->win = mlx_new_window(so_long->mlx, map->y * 60,
			map->x * 60, "so_long");
	so_long->map = map;
	so_long->size = 60;
	so_long->moves = 0;
	return (so_long);
}

int	main(int ac, char **av)
{
	t_game		*so_long;
	t_map		*map;

	if (ac != 2)
	{
		ft_putstr_fd(RED"Arguments must contain \"./so_long\" ", 2);
		ft_putstr_fd(RED"and \"mapfile/mapname\"!\n", 2);
		return (0);
	}
	if (!extention(av[1]))
		return (0);
	map = pass_map(av[1]);
	if (!map)
		return (0);
	so_long = long_s(map);
	if (!so_long)
		return (0);
	display_tex(so_long);
	mlx_key_hook(so_long->win, &keys, so_long);
	mlx_hook(so_long->win, 17, 0, freeall, so_long);
	mlx_loop(so_long->mlx);
}
