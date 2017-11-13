/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:29:23 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/13 16:33:18 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lbft.h"

char	*ft_cpcl(char *dst, char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (str)
		ft_stpcpy(ft_stpcpy(str, s1), s2);
	return (str);
}
