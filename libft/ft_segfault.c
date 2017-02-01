/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segfault.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:36:11 by jcone             #+#    #+#             */
/*   Updated: 2016/11/07 13:02:49 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_segfault(void *s)
{
	char	*silly_string;

	silly_string = (char *)s;
	if (silly_string == NULL)
		silly_string[0] = silly_string[ft_strlen(silly_string) + 10];
}
