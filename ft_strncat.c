/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 18:44:51 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/23 15:44:15 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	s1 = (char*)ft_memalloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	while (j < (int)n && s2[i] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
