/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:05:03 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/08 15:52:58 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*source;
	unsigned char		*dst;
	unsigned char		a;
	unsigned int		i;

	i = 0;
	source = src;
	dst = dest;
	a = c;
	while (i < n)
	{
		dst[i] = source[i];
		if (dst[i] == a)
			return (dst);
		i++;
	}
	return (NULL);
}
