/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:59:49 by jcone             #+#    #+#             */
/*   Updated: 2017/01/18 17:07:12 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	negtivehandle(char **fresh, int *k, int *j)
{
	if (*k == -2147483648)
	{
		fresh[0][0] = '-';
		fresh[0][1] = '2';
		*k = *k + 2000000000;
		*k = *k * -1;
		*j = *j + 2;
	}
	if (*k < 0)
	{
		fresh[0][0] = '-';
		*k = *k * -1;
		*j = *j + 1;
	}
}

char			*ft_itoa(int n)
{
	int		i;
	int		k;
	int		j;
	char	*fresh;

	j = 0;
	i = ft_charcount_int(n);
	if (!(fresh = ft_strnew((size_t)i)))
		return (NULL);
	k = n;
	i--;
	if (k < 0)
		negtivehandle(&fresh, &k, &j);
	while (i >= j)
	{
		fresh[i] = '0' + k % 10;
		k = k / 10;
		i--;
	}
	return (fresh);
}
