/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:01:56 by jcone             #+#    #+#             */
/*   Updated: 2016/11/12 13:23:53 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ref;

	ref = *alst;
	if (ref->next != NULL)
		ft_lstdel(&ref->next, del);
	del(ref->content, ref->content_size);
	free(*alst);
	*alst = NULL;
}
