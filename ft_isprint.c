/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:34:22 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/10 14:34:34 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
