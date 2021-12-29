/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:51:02 by jkwak             #+#    #+#             */
/*   Updated: 2021/12/26 20:28:50 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len && *(haystack + i))
	{
		j = 0;
		while ((*(haystack + i + j) == *(needle + j))
			&& *(needle + j) && ((i + j) < len))
			j++;
		if (!*(needle + j))
			return (*(haystack + i));
		i++;
	}
	return (NULL);
}
