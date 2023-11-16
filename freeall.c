/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:01:56 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/21 16:49:01 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	freeall(void *param)
{
	t_game	*game;

	game = (t_game *)param;
	free(game->map->player);
	free(game->map->map);
	free(game->map);
	free(game);
	exit(0);
	return (1);
}
