/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:11:09 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/15 15:51:05 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		scan;

	i = 0;
	j = 0;
	scan = 0;
	while (needle[scan])
		scan++;
	if (scan == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (needle[j] == haystack[i] && i < len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (((char*)haystack) + i - scan);
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}
