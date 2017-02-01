/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:54:54 by jcone             #+#    #+#             */
/*   Updated: 2016/11/09 12:28:13 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	size;
	int		i;

	if (s)
	{
		size = ft_strlen(s);
		fresh = ft_strnew(size);
	}
	i = 0;
	while (s && fresh && s[i] != '\0')
	{
		fresh[i] = f(s[i]);
		i++;
	}
	if (s && s[i] == '\0')
		fresh[i] = '\0';
	return (fresh);
}
