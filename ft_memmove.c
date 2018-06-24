/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:11:03 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/23 18:26:13 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*res;
	unsigned char	*source;

	source = (unsigned char*)src;
	res = (unsigned char*)dst;
	i = -1;
	while (++i < (int)len)
	{
		res[i] = (unsigned char)source[i];
	}
	return (dst);
}
