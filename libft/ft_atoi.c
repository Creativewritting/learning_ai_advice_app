/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:55:45 by jcone             #+#    #+#             */
/*   Updated: 2016/11/15 20:26:50 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int num;
	int negative;
	int n;

	num = 0;
	negative = 1;
	n = 0;
	while (str[n] != '\0' && ((str[n] >= 9 && str[n] <= 13) || str[n] == ' '))
		n++;
	if (str[n] == '-')
	{
		negative = -1;
		n++;
	}
	if (negative == -1 && str[n] == '+')
		return (0);
	if (str[n] == '+')
		n++;
	while (str[n] != '\0' && str[n] >= '0' && str[n] <= '9')
	{
		num = num * 10 + str[n] - '0';
		n++;
	}
	num = num * negative;
	return (num);
}
