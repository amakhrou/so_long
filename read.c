/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:47:58 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/20 13:45:35 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**reads(char *path)
{
	char	*line;
	char	*map;
	char	**mapholder;
	int		fd;

	fd = open (path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	map = ft_strdup("");
	line = "";
	while (line)
	{
		line = get_next_line(fd);
		if (!line || line[0] == '\n')
			break ;
		map = ft_strjoin(map, line);
		free(line);
	}
	close(fd);
	if (map[0] == '\0' || map[ard(&map) - 1] == '\n')
		return (0);
	mapholder = ft_split(map, '\n');
	free(map);
	return (mapholder);
}
