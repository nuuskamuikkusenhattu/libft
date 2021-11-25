/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:07:51 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/25 00:29:52 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*next;

	temp = *alst;
	if (alst)
	{
		while (temp)
		{
			next = temp->next;
			ft_lstdelone(&temp, del);
			temp = next;
		}
		*alst = NULL;
	}
}
