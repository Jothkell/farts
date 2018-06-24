/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 10:31:18 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/21 22:41:53 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		len;
	int		dec;
	int		res;

	res = 0;
	dec = 1;
	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (len >= 0)
	{
		res += (dec * (str[len] - 48));
		dec* = 10;
		len--;
	}
	return (res);
}
