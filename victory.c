/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   victory.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:01:36 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/23 12:55:59 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	victory(t_game *game)
{
	if (game->map->i == 0)
	{
		ft_putstr_fd(GREEN"\nGood job Well Play!\n", 1);
		exit(0);
	}
	ft_putstr_fd(RED"\nYOU CANT : Farm all Map!", 2);
}
