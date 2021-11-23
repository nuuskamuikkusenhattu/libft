/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:36:27 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/23 13:32:29 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*new;
	int		i;
	int		j;

	if (!str1 || !str2)
		return (NULL);
	new = (char *) malloc(sizeof(*new) * ft_strlen((char *) str1)
			+ ft_strlen((char *) str2) + 1);
	if (!new || !str1 || !str2)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[j] != '\0')
		new[i++] = str1[j++];
	j = 0;
	while (str2[j] != '\0')
	{
		new[i] = str2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
