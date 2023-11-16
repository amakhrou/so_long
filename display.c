/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:43:36 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/23 12:43:38 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display(t_game *game, int x, int y)
{
	char	*path;

	if (game->map->map[x][y] == '0')
		path = "textures/0.xpm";
	else if (game->map->map[x][y] == '1')
		path = "textures/1.xpm";
	else if (game->map->map[x][y] == 'C')
		path = "textures/C.xpm";
	else if (game->map->map[x][y] == 'P')
		path = "textures/P.xpm";
	else if (game->map->map[x][y] == 'E')
		path = "textures/E.xpm";
	else
		return ;
	game->img = mlx_xpm_file_to_image(game->mlx, path, &game->size,
			&game->size);
	if (!game->img)
	{
		ft_putstr_fd(RED"Texture diff!\nTexture not found!\n", 2);
		exit (1);
	}
	mlx_put_image_to_window(game->mlx, game->win, game->img,
		y * 60, x * 60);
	mlx_destroy_image(game->mlx, game->img);
}

void	display_tex(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (game->map->map[x])
	{
		y = 0;
		while (game->map->map[x][y] != '\n' && game->map->map[x][y])
		{
			display(game, x, y);
			y++;
		}
		x++;
	}
}
