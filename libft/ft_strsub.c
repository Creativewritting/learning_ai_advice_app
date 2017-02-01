/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:16:14 by jcone             #+#    #+#             */
/*   Updated: 2016/11/09 12:24:09 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start,
		size_t len)
{
	char			*fresh;
	unsigned int	k;
	unsigned int	i;

	k = start;
	i = 0;
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	while (s && i < len && s[k] != '\0')
	{
		fresh[i] = s[k];
		i++;
		k++;
	}
	if (s)
		fresh[i] = '\0';
	return (fresh);
}
