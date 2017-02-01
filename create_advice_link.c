/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_advice_link.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 13:43:49 by jcone             #+#    #+#             */
/*   Updated: 2017/02/01 13:57:42 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "advice_ai.h"

int	*initalize_ranks(int *ranks)
{
	int i;

	i = -1;
	ranks = (int *)malloc(sizeof(int) * (KEY_NUM + 1));
	while (i++ <= KEY_NUM)
		ranks[i] = 0;
	return (ranks);
}

void	initalize_next(t_advice_link *new)
{
	int i;

	i = -1;
	new->next = (t_advice_link **)malloc(sizeof(t_advice_link *) * (KEY_NUM + 1));
	while (i++ <= KEY_NUM)
		new->next[i] = NULL;
}

t_advice_link *create_new_advice(char **key_terms, t_advice_link **prev, t_advice_link **first, char *advice)
{
	t_advice_link	*new;

	new 				= (t_advice_link *)malloc(sizeof(t_advice_link) * 1);
	new->key_terms		= key_terms;
	new->term_ranks		= initalize_ranks(new->term_ranks);
	new->pending_ranks	= initalize_ranks(new->pending_ranks);
	initalize_next(new);
	new->prev			= prev;
	new->first			= first;
	new->sassy_rank		= 0;
	new->day			= DAY;
	new->month			= MONTH;
	new->advice			= advice;
	return (new);
}
