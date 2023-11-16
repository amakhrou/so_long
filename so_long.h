/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:01:16 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/21 16:48:24 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <mlx.h>

# define RED    "\033[1m\033[31m"
# define GREEN    "\033[1m\033[32m"
# define YELLOW    "\033[1m\033[33m"

typedef struct pos
{
	int	x;
	int	y;
}	t_pos;

typedef struct map
{
	char	**map;
	int		x;
	int		y;
	int		i;
	t_pos	*player;
}	t_map;

typedef struct game
{
	void	*mlx;
	void	*win;
	void	*img;
	int		size;
	int		moves;
	t_map	*map;
}	t_game;

char	**ft_split(char const *s, char c);
char	**reads(char *path);
char	**passmap(char *path);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr(int n);
void	display_tex(t_game *game);
void	victory(t_game *game);
size_t	ft_strlengh(char *s);

int		check_map_elements(char **map);
int		tol(char **map);
int		ard(char **map);
int		extention(char *path);
int		check_c(char **map);
int		jnb(char **jnb);
int		dyra(char **map);
int		mrb3a(char **map);
int		keys(int key, t_game *game);
int		freeall(void *param);
int		paths(char *path);
int		keys(int key, t_game *game);
int		check_px(char **map);
int		check_py(char **map);

t_pos	*placement(char **map, char c);
t_map	*pass_map(char *path);
t_game	*long_s(t_map *map);

void	move_up(t_game *game);
void	move_down(t_game *game);
void	move_left(t_game *game);
void	move_right(t_game *game);

void	move_u(t_game *game);
void	move_d(t_game *game);
void	move_l(t_game *game);
void	move_r(t_game *game);

#endif