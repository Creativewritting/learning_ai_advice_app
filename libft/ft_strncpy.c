/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:09:32 by jcone             #+#    #+#             */
/*   Updated: 2017/01/29 11:16:10 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;
	int		k;
	size_t	j;

	i = 0;
	k = 0;
	j = 0;
	while (j < len)
	{
		if (src[k] != '\0')
		{
			dst[i] = src[k];
			k++;
		}
		else
			dst[i] = '\0';
		i++;
		j++;
	}
	return (dst);
}
