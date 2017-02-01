/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:25:31 by jcone             #+#    #+#             */
/*   Updated: 2016/11/09 12:21:50 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	n;

	if (size != 0)
		n = 1;
	else
		n = 0;
	if ((new = (char *)malloc(size + n)))
		new = ft_memset((void *)new, '\0', size + n);
	else
		return (NULL);
	return (new);
}
