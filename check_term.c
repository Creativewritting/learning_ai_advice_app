/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_term.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <jamie.cone@piratefish4x4.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 16:53:37 by jcone             #+#    #+#             */
/*   Updated: 2017/02/01 17:50:11 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "advice_ai.h"

int		check_term(t_key_term_link **key_index, char *term, int *index_value)
{
	// a negative 1 means there was a diffrent error
	if (!key_index || !term)
		return (-1);
	while (key_index[*index_value] != NULL)
	{
		//return that the term was found
		if (ft_strequ(key_index[*index_value]->key_term, term))
			return (1);
		*index_value += 1;
	}
	//return indicating that the term was not found but no errors orrcured
	return(0);
}
