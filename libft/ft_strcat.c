/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:54:24 by jcone             #+#    #+#             */
/*   Updated: 2016/11/07 13:09:48 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	char	*s3;

	i = 0;
	s3 = ft_strchr(s1, '\0');
	while (s2[i] != '\0')
	{
		s3[i] = (char)s2[i];
		i++;
	}
	s3[i] = '\0';
	return (s1);
}