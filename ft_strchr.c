/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:57:30 by jkwak             #+#    #+#             */
/*   Updated: 2021/12/14 21:34:19 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (c == 0)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
