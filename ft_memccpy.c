/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:11:03 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/23 15:06:40 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*res;
	unsigned char	*source;
	void			*rs;

	rs = NULL;
	source = (unsigned char*)src;
	res = (unsigned char*)dst;
	i = -1;
	while (++i < (int)n && source[i] != c)
		res[i] = (unsigned char)source[i];
	if (*res == c)
	{
		res++;
		*res = '\0';
		return (res);
	}
	dst = (void*)res;
	return (rs);
}
