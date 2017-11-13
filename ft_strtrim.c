/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:34:15 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/13 16:58:50 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;

	str = (char *)malloc(ft_strlen(s) + 1) * sizeof(char)
	if (str)
	{
		i = 0;
		while (s[i])
		{
			if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
				str[i++] = s[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
