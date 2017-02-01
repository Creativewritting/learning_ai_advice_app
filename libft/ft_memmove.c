/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:09:32 by jcone             #+#    #+#             */
/*   Updated: 2016/11/08 16:58:09 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sorc;

	dest = dst;
	sorc = (unsigned char *)src;
	if (dest < sorc)
		return (ft_memcpy(dest, src, len));
	if (dest == sorc)
		return (dst);
	while (0 < len)
	{
		dest[len - 1] = sorc[len - 1];
		len--;
	}
	return ((void *)dest);
}
