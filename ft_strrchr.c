/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 21:13:57 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/23 16:09:06 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*temp;

	temp = (char *)ft_memalloc(sizeof(s));
	temp = (char*)s;
	while (*s != '\0')
		s++;
	while (s != temp)
	{
		if (*s == c)
			return ((char*)s);
		s--;
	}
	return (NULL);
}
