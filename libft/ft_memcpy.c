/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:09:32 by jcone             #+#    #+#             */
/*   Updated: 2016/11/03 15:45:33 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	int				k;
	unsigned char	*dest;
	unsigned char	*sorc;
	size_t			j;

	i = 0;
	k = 0;
	j = 0;
	dest = dst;
	sorc = (unsigned char *)src;
	while (j < n)
	{
		dest[i] = sorc[k];
		k++;
		i++;
		j++;
	}
	return (dst);
}
