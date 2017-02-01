/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 10:48:43 by jcone             #+#    #+#             */
/*   Updated: 2016/11/12 16:40:43 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int n;

	if (s)
	{
		n = 0;
		while (s[n] != '\0')
		{
			ft_putchar(s[n]);
			n++;
		}
		ft_putchar('\n');
	}
}