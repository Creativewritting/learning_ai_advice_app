/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:00:26 by jcone             #+#    #+#             */
/*   Updated: 2016/11/09 12:26:53 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little,
		size_t len)
{
	const char	*start;
	char		*sub;
	size_t		i;
	size_t		llen;

	i = 0;
	start = (char *)big;
	llen = ft_strlen(little);
	sub = ft_strsub(big, 0, len);
	ft_segfault((void *)big);
	ft_segfault((void *)little);
	while (sub[i] != '\0' && llen <= ft_strlen(&sub[i]))
	{
		if (sub[i] == little[0])
			if (ft_strnequ(little, &sub[i], ft_strlen(little)))
				return ((char *)&big[i]);
		i++;
	}
	if (*little == '\0')
		return ((char *)big);
	return (NULL);
}
