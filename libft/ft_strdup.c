/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:02:42 by jcone             #+#    #+#             */
/*   Updated: 2016/11/09 12:29:46 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	const char	*cp;

	i = ft_strlen(s1);
	if ((cp = (const char *)ft_memalloc(i + 1)))
		cp = ft_memcpy((void *)cp, s1, i);
	else
		return (NULL);
	return ((char *)cp);
}
