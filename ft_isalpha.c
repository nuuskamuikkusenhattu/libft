/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:41:12 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/08 13:33:07 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || ((c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}