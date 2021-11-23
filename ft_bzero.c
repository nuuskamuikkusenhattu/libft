/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:26:25 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/18 12:50:54 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *) s;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			temp[i] = '\0';
			i++;
		}
	}
}
