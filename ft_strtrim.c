/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 11:01:26 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/21 22:38:45 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*res;
	char	*si;

	j = 0;
	res = (char*)malloc(sizeof(s));
	i = 0;
	si = (char*)s;
	while (s[i] != '\0')
		i++;
	i--;
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i--;
	i++;
	si[i] = '\0';
	i = 0;
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != '\0')
	{
		res[j] = (char)malloc(sizeof(char));
		res[j++] = s[i++];
	}
	return (res);
}
