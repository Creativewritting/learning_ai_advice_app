/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:59:35 by jcone             #+#    #+#             */
/*   Updated: 2016/11/04 11:32:56 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*end;
	int		i;

	end = (char *)s;
	i = 0;
	while (end[i] != '\0' && end[i] != (unsigned char)c)
		i++;
	if (end[i] == (unsigned char)c)
		return (&end[i]);
	else
		return (NULL);
}
