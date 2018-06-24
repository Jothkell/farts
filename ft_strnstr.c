/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 21:20:52 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/23 16:12:20 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		rewind;
	char	*res;

	res = (char*)ft_memalloc(sizeof(haystack));
	rewind = 0;
	j = -1;
	i = 0;
	while (++j < (int)len)
		if (haystack[j] == needle[i])
		{
			i = 0;
			rewind = 0;
			while (haystack[j++] == needle[i++])
			{
				rewind++;
				if ('\0' == needle[i])
					return ((char*)(&haystack[(j - rewind)]));
			}
			j = (j - rewind) - 1;
		}
	return (NULL);
}
