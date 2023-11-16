/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:09:46 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/23 13:37:12 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_u(t_game *game)
{
	char	**map;
	int		x;
	int		y;

	map = game->map->map;
	x = game->map->player->x;
	y = game->map->player->y;
	if (map[y - 1][x] == '0')
		move_up(game);
	if (map[y - 1][x] == 'C')
	{
		move_up(game);
		game->map->i--;
	}
	if (map[y - 1][x] == 'E')
		victory(game);
	mlx_clear_window(game->mlx, game->win);
}

void	move_d(t_game *game)
{
	char	**map;
	int		x;
	int		y;

	map = game->map->map;
	x = game->map->player->x;
	y = game->map->player->y;
	if (map[y + 1][x] == '0')
		move_down(game);
	if (map[y + 1][x] == 'C')
	{
		move_down(game);
		game->map->i--;
	}
	if (map[y + 1][x] == 'E')
		victory(game);
	mlx_clear_window(game->mlx, game->win);
}

void	move_l(t_game *game)
{
	char	**map;
	int		x;
	int		y;

	map = game->map->map;
	x = game->map->player->x;
	y = game->map->player->y;
	if (map[y][x - 1] == '0')
		move_left(game);
	if (map[y][x - 1] == 'C')
	{
		move_left(game);
		game->map->i--;
	}
	if (map[y][x - 1] == 'E')
		victory(game);
	mlx_clear_window(game->mlx, game->win);
}

void	move_r(t_game *game)
{
	char	**map;
	int		x;
	int		y;

	map = game->map->map;
	x = game->map->player->x;
	y = game->map->player->y;
	if (map[y][x + 1] == '0')
		move_right(game);
	if (map[y][x + 1] == 'C')
	{
		move_right(game);
		game->map->i--;
	}
	if (map[y][x + 1] == 'E')
		victory(game);
	mlx_clear_window(game->mlx, game->win);
}
