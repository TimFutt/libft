/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:52:55 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/10 15:01:44 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*temp1;
	char	*temp2;
	char	*temp3;

	count = 0;
	temp1 = (char*)malloc(sizeof(void) * n);
	temp2 = (char*)src;
	temp3 = (char*)dest;
	while (count < n)
	{
		temp1[count] = temp2[count];
		count++;
	}
	count = 0;
	while (count < n)
	{
		temp3[count] = temp1[count];
		count++;
	}
	return (temp2);
}
