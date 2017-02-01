/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:12:41 by jcone             #+#    #+#             */
/*   Updated: 2016/11/02 10:32:31 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[j] &&
			((unsigned char)s1[i] != '\0' && s2[j] != '\0'))
	{
		i++;
		j++;
		if (((unsigned char)s1[i] < (unsigned char)s2[j]) ||
				((unsigned char)s1[i] > (unsigned char)s2[j]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	if ((unsigned char)s1[i] == (unsigned char)s2[j])
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
