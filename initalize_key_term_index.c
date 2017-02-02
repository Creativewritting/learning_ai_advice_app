/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initalize_key_term_index.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <jamie.cone@piratefish4x4.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 17:11:55 by jcone             #+#    #+#             */
/*   Updated: 2017/02/01 17:39:22 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "advice_ai.h"

t_key_term_link	**initalize_key_term_index(int num)
{
	t_key_term_link	**new_index;
	int					i;

	i					= -1;
	if (!(new_index		= (t_key_term_link **)malloc(sizeof(t_key_term_link *) * (num + 1))))
		return (NULL);
	while (i++ < num)
		new_index[i] 	= NULL;
	return (new_index);
}
