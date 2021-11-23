/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:44:03 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/23 13:50:18 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	if (c == '\0')
		return ((char *)str + ft_strlen((char *) str));
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else
			return ((char *)str + i);
	}
	return (NULL);
}
