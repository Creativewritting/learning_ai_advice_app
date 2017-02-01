/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_array_inner.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:48:12 by jcone             #+#    #+#             */
/*   Updated: 2016/11/16 12:59:32 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_malloc_array_inner(char **array, int arraypart, int len, int *place)
{
	if (!(array[arraypart] = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		return (-1);
	*place = *place - len;
	return (1);
}
