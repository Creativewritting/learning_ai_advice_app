/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sepvalcon.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:59:53 by jcone             #+#    #+#             */
/*   Updated: 2016/11/13 12:33:02 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** this function takes a value to separate strings
** and counts how many items it separates.
** If it doesn't find c the number given is returned.
*/

#include "libft.h"

int		ft_sepvalcon(char const *s, char c, int num)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		if (s[i] != c)
			if ((s[i + 1] == c || s[i + 1] == '\0'))
				num++;
		i++;
	}
	return (num);
}
