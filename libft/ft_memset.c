/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:07:50 by jcone             #+#    #+#             */
/*   Updated: 2016/11/03 11:12:34 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*unchar;

	i = 0;
	unchar = b;
	while (i < len)
	{
		unchar[i] = (unsigned char)c;
		i++;
	}
	return (unchar);
}
