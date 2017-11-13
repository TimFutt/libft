/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:59:05 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/13 17:02:02 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**str;

	i = 0;
	j = 0;
	while (s[i++])
		if (s[i - 1] != c && (s[i] == c || !s[i]))
			j++;
	str = (char**)malloc(sizeof(*str) * j);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
			str[j] = ft_strsub(s, start, i - start);
		j++;
	}
	return (str);
}

