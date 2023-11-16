/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:22:35 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/21 14:08:33 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_map	*pass_map(char *path)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	map->map = passmap(path);
	map->x = tol(map->map);
	map->y = ard(map->map);
	map->i = check_c(map->map);
	map->player = placement(map->map, 'P');
	return (map);
}
