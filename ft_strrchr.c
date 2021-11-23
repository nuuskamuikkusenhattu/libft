/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:12:36 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/22 13:39:34 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;

	len = ft_strlen((char *) str);
	if (c == '\0')
		return ((char *)str + len);
	while (len > 0)
	{
		if (str[len - 1] != c)
			len--;
		else
			return ((char *) str + len - 1);
	}
	return (NULL);
}
