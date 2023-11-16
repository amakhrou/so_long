/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bercheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakhrou <amakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:29:50 by amakhrou          #+#    #+#             */
/*   Updated: 2023/05/20 13:42:37 by amakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char )c)
			return ((char *) s + i);
		i--;
	}
	if ((unsigned char )c == '\0')
		return ((char *)s);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	extention(char *ext)
{
	ext = ft_strrchr(ext, '.');
	if (!ext)
	{
		ft_putstr_fd(RED"INVALID : extention must be .ber!\n", 2);
		return (0);
	}
	if (ft_strcmp(ext, ".ber"))
	{
		ft_putstr_fd(RED"INVALID : extention diff!\n", 2);
		return (0);
	}
	return (1);
}
