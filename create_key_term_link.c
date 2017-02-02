/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_key_term_link.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <jamie.cone@piratefish4x4.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 16:19:04 by jcone             #+#    #+#             */
/*   Updated: 2017/02/01 16:31:46 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "advice_ai.h"

t_key_term_link		*create_key_term_link(t_advice_link *start, char *key_term)
{
	t_key_term_link	*new;

	if (!(new		= (t_key_term_link *)malloc(sizeof(t_key_term_link) * 1)))
		return (NULL);
	new->start		= start;
	new->key_term	= key_term;
	return (new);
}
