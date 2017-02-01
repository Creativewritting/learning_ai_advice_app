/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:42:24 by jcone             #+#    #+#             */
/*   Updated: 2017/01/13 17:37:26 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **start, t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ref;

	ref = *alst;
	del(ref->content, ref->content_size);
	if (!ref->prev)
	{
		if (ref->next)
		{
			*start = ref->next;
			ref->next->prev = NULL;
		}
		else
			*start = NULL;
	}
	else
	{
		ref->prev->next = ref->next;
		if (ref->next)
			ref->next->prev = ref->prev;
	}
	free(*alst);
	*alst = NULL;
}
