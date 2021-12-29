/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 07:11:42 by jkwak             #+#    #+#             */
/*   Updated: 2021/12/28 08:17:04 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		full_len;
	char	*new_str;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	full_len = s1_len + s2_len;
	new_str = (char *)malloc(sizeof(char) * full_len + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, s1_len);
	ft_strlcpy(&(new_str + s1_len), s2, s2_len);
	*(new_str + full_len) = 0;
	return (new_str);
}
