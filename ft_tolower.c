/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:36:02 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/03 17:42:48 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int		dif;

	dif = 'A' - 'a';
	if (c >= 'A' && c <= 'Z')
		return (c - dif);
	else
		return (c);
}
