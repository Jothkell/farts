/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:17:06 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/21 22:29:58 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*res;

	i = 0;
	res = (char*)malloc(sizeof(s));
	while (s[i] != '\0')
	{
		res[i] = (char)malloc(sizeof(char));
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}
