/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:15:45 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/13 16:19:39 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*map;
	unsigned int	i;

	i = 0;
	map = ft_strdup(s);
//	if (!map || !s || !f)
//		return (NULL);
	while (map[i])
	{
		map[i] = f(map[i]);
		i++;
	}
	return (map);
}
