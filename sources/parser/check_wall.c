/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:52:20 by iyarikan          #+#    #+#             */
/*   Updated: 2022/11/23 20:52:22 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

int	check_wall(t_map *map, char ch)
{
	int		i;
	int		j;
	char	*s;

	i = 1;
	while (map->data[i] && map->data[i + 1])
	{
		s = map->data[i];
		j = 0;
		while (s[j])
		{
			if (s[j] == ch && ((!j || s[j - 1] == ' '
						|| !s[j + 1] || s[j + 1] == ' ')
					|| ((size_t)j + 1 > ft_strlen(map->data[i - 1])
						|| map->data[i - 1][j] == ' ')
				|| ((size_t)j + 1 > ft_strlen(map->data[i + 1])
					|| map->data[i + 1][j] == ' ')))
				return (-1);
			j++;
		}	
		i++;
	}
	if (ft_strchr(map->data[i], ch) || ft_strchr(map->data[0], ch))
		return (-1);
	return (0);
}
