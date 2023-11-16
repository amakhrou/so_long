/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:04:42 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/19 16:24:02 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_game *game)
{
	char	**map;
	int		x;
	int		y;

	map = game->map->map;
	x = game->map->player->x;
	y = game->map->player->y;
	map[y - 1][x] = 'P';
	map[y][x] = '0';
	game->map->player->y--;
	game->moves++;
	ft_putstr_fd(YELLOW"\nMoves -> ", 1);
	ft_putnbr(game->moves);
}

void	move_down(t_game *game)
{
	char	**map;
	int		x;
	int		y;

	map = game->map->map;
	x = game->map->player->x;
	y = game->map->player->y;
	map[y + 1][x] = 'P';
	map[y][x] = '0';
	game->map->player->y++;
	game->moves++;
	ft_putstr_fd(YELLOW"\nMoves -> ", 1);
	ft_putnbr(game->moves);
}

void	move_left(t_game *game)
{
	char	**map;
	int		x;
	int		y;

	map = game->map->map;
	x = game->map->player->x;
	y = game->map->player->y;
	map[y][x - 1] = 'P';
	map[y][x] = '0';
	game->map->player->x--;
	game->moves++;
	ft_putstr_fd(YELLOW"\nMoves -> ", 1);
	ft_putnbr(game->moves);
}

void	move_right(t_game *game)
{
	char	**map;
	int		x;
	int		y;

	map = game->map->map;
	x = game->map->player->x;
	y = game->map->player->y;
	map[y][x + 1] = 'P';
	map[y][x] = '0';
	game->map->player->x++;
	game->moves++;
	ft_putstr_fd(YELLOW"\nMoves -> ", 1);
	ft_putnbr(game->moves);
}
