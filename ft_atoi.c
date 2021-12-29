/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:29:23 by jkwak             #+#    #+#             */
/*   Updated: 2021/12/26 21:32:44 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	value;
	int	nbr;

	i = 0;
	while (((*(str + i) >= 9) && (*(str + i) <= 13))
		|| (*(str + i) == 32))
		i++;
	value = 1;
	if (*(str + i) == '-')
	{
		value = -1;
		i++;
	}
	if (*(str + i) == '+')
		i++;
	nbr = 0;
	while ((*(str + i) >= '0') && (*(str + i) <= '9'))
	{
		nbr = (nbr * 10) + *(str + i) - '0';
		i++;
	}
	return (value * nbr);
}
