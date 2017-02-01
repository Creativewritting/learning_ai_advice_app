/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:12:41 by jcone             #+#    #+#             */
/*   Updated: 2016/11/16 12:19:07 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] &&
			((unsigned char)s1[i] != '\0' && s2[i] != '\0') && j < n - 1)
	{
		if (((unsigned char)s1[i] < (unsigned char)s2[i]) ||
				((unsigned char)s1[i] > (unsigned char)s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
		j++;
	}
	if ((unsigned char)s1[i] == (unsigned char)s2[i] || n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
