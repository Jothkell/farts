/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 11:45:42 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/21 22:36:29 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*res;
	char	*rev;

	res = (char*)malloc(sizeof(char*));
	rev = (char*)malloc(sizeof(char*));
	*rev = 46;
	rev++;
	while (n > 0)
	{
		*rev = (char)malloc(sizeof(char));
		*rev = n % 10;
		n /= 10;
		rev++;
	}
	while (*rev != 46)
	{
		*res = *rev;
		res++;
		rev--;
	}
	return (res);
}
