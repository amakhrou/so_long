/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:57:24 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/23 13:37:04 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	keys(int key, t_game *game)
{
	if (key == 53 || key < 0)
		exit(0);
	mlx_clear_window(game->mlx, game->win);
	if (key == 2 || key == 124)
		move_r(game);
	if (key == 0 || key == 123)
		move_l(game);
	if (key == 13 || key == 126)
		move_u(game);
	if (key == 1 || key == 125)
		move_d(game);
	display_tex(game);
	return (0);
}
