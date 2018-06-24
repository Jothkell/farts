/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:30:11 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/21 22:44:34 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = (char*)malloc(sizeof(s));
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = (char)malloc(sizeof(char));
		res[i] = f(i, (char)s[i]);
		i++;
	}
	return (res);
}
