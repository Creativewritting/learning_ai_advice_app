/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:54:54 by jcone             #+#    #+#             */
/*   Updated: 2016/11/07 13:04:03 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	size_t			size;
	unsigned int	i;

	if (s)
	{
		size = ft_strlen(s);
		fresh = ft_strnew(size);
	}
	i = 0;
	while (s && fresh && s[i] != '\0')
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	if (s && s[i] == '\0')
		fresh[i] = '\0';
	return (fresh);
}
