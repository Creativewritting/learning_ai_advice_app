/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:14:30 by jcone             #+#    #+#             */
/*   Updated: 2017/01/16 16:47:15 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	int		i;
	size_t	k;

	fresh = NULL;
	i = 0;
	if (s)
	{
		k = ft_strlen(s);
		while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s)
			i++;
		k--;
		while (s && s[i] != '\0' && (s[k] == ' ' ||
			s[k] == '\n' || s[k] == '\t'))
			k--;
		if (s && !(fresh = ft_strsub(s, i, k + 1 - i)))
			return (NULL);
	}
	return (fresh);
}
