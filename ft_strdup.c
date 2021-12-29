/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:31:19 by jkwak             #+#    #+#             */
/*   Updated: 2021/12/26 23:54:36 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		s1_len;
	int		i;

	s1_len = strlen(s1);
	result = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (result == 0)
		return (NULL);
	i = 0;
	while (*(s1 + i))
	{
		*(result + i) = *(s1 + i);
		i++;
	}
	*(result + i) = 0;
	return (result);
}
