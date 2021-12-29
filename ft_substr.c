/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 06:49:04 by jkwak             #+#    #+#             */
/*   Updated: 2021/12/28 07:11:19 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	sub_str = (char *)malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	sub_str = ft_memchr(s, (int)start, 1);
	sub_str = ft_memmove(sub_str, sub_str, len);
	*(sub_str + len) = 0;
	return (sub_str);
}
