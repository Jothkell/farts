/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 18:02:47 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/21 22:37:22 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*r1;
	unsigned char	*r2;

	r1 = (unsigned char*)s1;
	r2 = (unsigned char*)s2;
	i = -1;
	while (++i < (int)n)
		if (r1[i] == r2[i])
			return (r1[i] - r2[i]);
	return (0);
}
