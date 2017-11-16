/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:19:35 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/16 16:40:43 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert(char *result, int length, long int nb, long int product)
{
	while (nb > 0)
	{
		result[++length] = (nb / product) + '0';
		nb = nb % product;
		product = product / 10;
	}
	result[++length] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int			length;
	int			is_neg;
	long int	product;
	long int	nb;
	char		*result;

	product = 1;
	length = 0;
	is_neg = (n < 0) ? 1 : 0;
	nb = n;
	nb = (is_neg == 0) ? nb : nb * -1;
	while (nb / product > 1)
	{
		product = product * 10;
		length++;
	}
	result = (char*)malloc(sizeof(char) * length + 2);
	length = -1;
	if (is_neg == 1)
		result[++length] = '-';
	product = product / 10;
	result = convert(result, length, nb, product);
	return (result);
}
