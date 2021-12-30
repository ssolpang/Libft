/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:31:04 by jkwak             #+#    #+#             */
/*   Updated: 2021/12/30 15:56:00 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(int n)
{
	int	len;

	if (n > 0)
		len = 0;
	else
		len = 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	nbr_sign(int n)
{
	if (n > 0)
		return (1);
	else
		return (-1);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		len;
	int		sign;

	if (n == 0)
		return ("0");
	len = nbr_len(n);
	sign = nbr_sign(n);
	nbr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nbr)
		return (NULL);
	*(nbr + len--) = 0;
	if (n < 0)
		n = -n;
	while (len >= 0)
	{
		*(nbr + len) = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (sign < 0)
		*(nbr + 0) = '-';
	return (nbr);
}
