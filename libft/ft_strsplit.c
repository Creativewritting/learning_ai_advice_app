/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:41:04 by exam              #+#    #+#             */
/*   Updated: 2016/11/16 12:58:46 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_if(const char *s, int *i)
{
	if (s[*i] != '\0')
		*i += 1;
}

static int	ft_inner_array(char **array, const char *s, char c, int *i)
{
	int l;
	int k;
	int j;

	k = 0;
	while (s[*i] != '\0')
	{
		if (s[*i] != c)
		{
			j = ft_strlenc(s, i, c);
			if (ft_malloc_array_inner(array, k, j, i) == -1)
				return (-1);
			l = 0;
			while ((s[*i] != '\0') && j > l)
			{
				array[k][l] = s[*i];
				*i += 1;
				l++;
			}
			array[k][l] = '\0';
			k += 1;
		}
		ft_if(s, i);
	}
	return (k);
}

char		**ft_strsplit(char const *s, char c)
{
	int		num;
	int		i;
	char	**array;

	if (!s)
		return (NULL);
	num = ft_sepvalcon(s, c, 0);
	if (!(array = (char **)ft_memalloc(sizeof(char *) * (num + 1))))
		return (NULL);
	i = 0;
	if (ft_inner_array(array, s, c, &i) == -1)
		return (NULL);
	if (!(array[num] = (char *)ft_memalloc(sizeof(char) * 1)))
		return (NULL);
	array[num] = NULL;
	return (array);
}
