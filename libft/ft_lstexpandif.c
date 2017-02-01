/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstexpandif.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 17:07:17 by jcone             #+#    #+#             */
/*   Updated: 2017/01/15 13:16:36 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstexpandif(const int id, void const *content,
						size_t content_size, t_list **start)
{
	t_list *current;

	if (*start == NULL)
	{
		*start = ft_lstnew(content, content_size, id, NULL);
		current = *start;
	}
	else
	{
		current = *start;
		while (current->next != NULL && id != current->id)
			current = current->next;
		if (current->next == NULL && current->id != id)
		{
			current->next = ft_lstnew(content, content_size, id, current);
			current = current->next;
		}
	}
	return (current);
}
