/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:59:35 by jcone             #+#    #+#             */
/*   Updated: 2016/11/04 11:51:49 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*end;
	int		i;
	int		n;

	end = (char *)s;
	i = 0;
	n = 0;
	while (end[i] != '\0')
	{
		if (end[i] == (unsigned char)c)
			n = i;
		i++;
	}
	if (end[i] == (unsigned char)c)
		n = i;
	if (end[n] == (unsigned char)c)
		return (&end[n]);
	else
		return (NULL);
}
