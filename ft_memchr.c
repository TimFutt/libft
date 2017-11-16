/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:19:51 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/16 13:25:20 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	char		*ptr;
	const void	*result;

	i = -1;
	result = 0;
	ptr = (char *)str;
	while (++i < n)
		if (ptr[i] == c)
		{
			result = str + i;
			break ;
		}
	return ((void *)result);
}
