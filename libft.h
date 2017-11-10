/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:01:40 by tifuret           #+#    #+#             */
/*   Updated: 2017/11/08 17:09:49 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//void	*ft_memset(void *b, int c, size_t len);
//void	ft_bzero(void *s, size_t n);
//void	*ft_memcpy(void *dest, const void *src, size_t n);
//void	*memccpy(void *dest, const void *src, int c, size_t n);
//void	*memmove(void *dest, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);

#endif
