/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:09:32 by jcone             #+#    #+#             */
/*   Updated: 2016/11/03 16:05:51 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*dest;
	unsigned char	*sorc;
	size_t			j;

	i = 0;
	j = 0;
	dest = dst;
	sorc = (unsigned char *)src;
	while (j < n)
	{
		dest[i] = sorc[i];
		if (sorc[i] == (unsigned char)c)
			return (&dest[i + 1]);
		i++;
		j++;
	}
	return (NULL);
}
