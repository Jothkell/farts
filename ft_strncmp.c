/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 10:12:38 by jkellehe          #+#    #+#             */
/*   Updated: 2018/06/21 21:56:20 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && i < (int)n)
	{
		if (s2[i] == '\0')
			return (1);
		else if (s2[i] > s1[i])
			return (-1);
		else if (s2[i] < s1[i])
			return (1);
		i++;
	}
	if (s2[i] == '\0' && s1[i] == '\0')
		return (0);
	else if (s2[i] == '\0')
		return (1);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (0);
}
