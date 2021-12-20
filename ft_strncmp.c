/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:30:27 by jkwak             #+#    #+#             */
/*   Updated: 2021/12/20 16:53:12 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(s1 + i) && *(s2 + i)
		&& (*(s1 + i) == *(s2 + i)))
		i++;
	if (i < n)
		return (*(s1 + i) - *(s2 + i));
	return (0);
}
