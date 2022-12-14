/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbulut <makbulut@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:01:26 by makbulut          #+#    #+#             */
/*   Updated: 2022/08/23 00:21:58 by makbulut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

int		get_line(int fd, char **str, int f);
char	*join_and_free(char *s1, char *s2);
int		ft_isspace(int c);

#endif