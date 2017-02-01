/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:12:41 by jcone             #+#    #+#             */
/*   Updated: 2016/11/16 12:43:29 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		k;
	size_t	j;

	i = 0;
	k = 0;
	j = 0;
	while (s1 && s2 && ((unsigned char)s1[i] != '\0' || s2[i] != '\0') && j < n)
	{
		j++;
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (0);
		i++;
	}
	return (1);
}
