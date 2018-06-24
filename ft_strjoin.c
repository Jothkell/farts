/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 18:22:39 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/21 22:42:51 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = (char*)malloc(sizeof(s1) + sizeof(s2));
	while (s1[i] != '\0')
	{
		res[i] = (char)malloc(sizeof(char));
		res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		res[i] = (char)malloc(sizeof(char));
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
