/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:51:29 by jcone             #+#    #+#             */
/*   Updated: 2016/11/12 16:47:01 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*next;
	t_list	*new;

	if (!lst)
		return (NULL);
	if (lst->next != NULL)
		next = ft_lstmap(lst->next, f);
	if (!(new = f(lst)))
		return (NULL);
	new->next = next;
	return (new);
}
