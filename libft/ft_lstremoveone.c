/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremoveone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 13:14:48 by jcone             #+#    #+#             */
/*   Updated: 2017/01/15 13:15:24 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremoveone(t_list **start, t_list **alst)
{
	t_list	*ref;

	ref = *alst;
	if (ref->content != NULL)
		free(ref->content);
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
