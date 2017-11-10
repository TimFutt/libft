/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:19:51 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/08 16:52:14 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while(i < n)
	{


}

int     main()
{
	//char    str[] = "j'aime les chouquettes avec du chocolat";
	//printf("%d", ft_memchr(str, 'u', 6));
	//puts(str);
	char    str2[] = "j'aime les chouquettes avec du chocolat";
	printf("%s", memchr(str2, 'u', 50));
	puts(str2);
	return (0);
}
