/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:08:31 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/23 13:27:08 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	if (!str)
		return (NULL);
	if (ft_strlen((char *) str) < (int) start
		|| (int) len > (ft_strlen((char *) str) - (int) start))
		return (NULL);
	new = (char *) malloc(sizeof(*new) * len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		new[i] = str[start];
		i++;
		start++;
		len--;
	}
	new[i] = '\0';
	return (new);
}
