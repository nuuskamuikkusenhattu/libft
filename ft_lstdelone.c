/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:44:40 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/25 00:00:01 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	temp = *alst;
	if (alst)
	{
		del(temp->content, temp->content_size);
		free(*alst);
		*alst = NULL;
	}
}
