/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:00:26 by jcone             #+#    #+#             */
/*   Updated: 2016/11/16 18:03:55 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int			i;
	int			n;

	i = 0;
	n = 0;
	if (ft_strequ(little, ""))
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == little[0])
			n = ft_strnequ(&big[i], little, ft_strlen(little));
		if (n == 1)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
