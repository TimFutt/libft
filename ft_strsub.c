/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:20:39 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/13 16:29:04 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;

	if (!s || !str)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	i = 0;
	str[len] = '\0';
	while (len--)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
