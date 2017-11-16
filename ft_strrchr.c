/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:53:23 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/15 15:47:50 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	char    *str;
	int		i;

	i = 0;
	str = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			str = (char *)s;
		s++;
	}
	if (*s == (char)c)
		strr = (char *)s;
	return (strr);
}
