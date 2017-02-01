/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:09:32 by jcone             #+#    #+#             */
/*   Updated: 2016/11/03 21:28:59 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*sorc;
	size_t			j;

	i = 0;
	j = 0;
	sorc = (unsigned char *)src;
	while (j < n)
	{
		if (sorc[i] == (unsigned char)c)
			return (&sorc[i]);
		i++;
		j++;
	}
	return (NULL);
}
