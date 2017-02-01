/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:54:24 by jcone             #+#    #+#             */
/*   Updated: 2016/11/09 12:41:32 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		k;
	char	*s3;

	i = 0;
	k = 0;
	s3 = ft_strchr(dst, '\0');
	i = ft_strlen(dst);
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	while (src[k] != '\0' && i < size - 1)
	{
		s3[k] = (char)src[k];
		i++;
		k++;
	}
	s3[k] = '\0';
	i = ft_strlen(src) + i - k;
	return (i);
}
