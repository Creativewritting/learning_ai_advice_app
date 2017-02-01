/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:12:41 by jcone             #+#    #+#             */
/*   Updated: 2016/11/07 13:10:17 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1 && s2 && (unsigned char)s1[i] == (unsigned char)s2[j] &&
			((unsigned char)s1[i] != '\0' && s2[j] != '\0'))
	{
		i++;
		j++;
		if (((unsigned char)s1[i] < (unsigned char)s2[j]) ||
				((unsigned char)s1[i] > (unsigned char)s2[j]))
			return (0);
	}
	if (s1 && s2 && (unsigned char)s1[i] == (unsigned char)s2[j])
		return (1);
	else
		return (0);
}
