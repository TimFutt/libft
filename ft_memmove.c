/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:52:55 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/16 14:45:48 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;
	char	*source;
	char	*dst;

	i = 0;
	tmp = (char*)malloc(sizeof(void) * n);
	source = (char *)src;
	dst = dest;
	while (i < n)
	{
		tmp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst[i] = tmp[i];
		i++;
	}
	return (dst);
}
