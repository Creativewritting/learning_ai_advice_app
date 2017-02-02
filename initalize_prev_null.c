/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initalize_prev_null.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <jamie.cone@piratefish4x4.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 16:34:50 by jcone             #+#    #+#             */
/*   Updated: 2017/02/01 16:48:36 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "advice_ai.h"

t_advice_link	**initalize_prev_null()
{
	t_advice_link	**prev_list;

	if (!(prev_list	= (t_advice_link **)malloc(sizeof(t_advice_link *) * (KEY_NUM + 1))))
		return (NULL);
	for (int i = 0; i <= KEY_NUM; i++)
		prev_list[i] = NULL;
	return (prev_list);
}
