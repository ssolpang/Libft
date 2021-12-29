/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 16:43:07 by jkwak             #+#    #+#             */
/*   Updated: 2021/12/26 17:50:01 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(s1 + i) && *(s2 + i))
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		else
			break ;
	}
	if (i < n)
		return ((int)(*(s1 + i) - *(s2 + i)));
	return (0);
}
