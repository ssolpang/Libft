/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 08:19:36 by jkwak             #+#    #+#             */
/*   Updated: 2022/01/05 23:10:18 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_start(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	while (*(s1 + i))
	{
		j = 0;
		while (*(set + j))
		{
			if (*(s1 + i) == *(set + j))
				break ;
			else
				j++;
		}
		if (*(set + j) == 0)
			return (i);
		i++;
	}
	return (i);
}

int	find_end(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = ft_strlen(s1) - 1;
	while (*(s1 + i))
	{
		j = 0;
		while (*(set + j))
		{
			if (*(s1 + i) == *(set + j))
				break ;
			else
				j++;
		}
		if (*(set + j) == 0)
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		start;
	int		end;
	int		i;

	if (!*s1)
		return (NULL);
	if (!*set)
		return ((char *)s1);
	start = find_start(s1, set);
	end = find_end(s1, set);
	new_str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!new_str)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		*(new_str + i) = *(s1 + start);
		i++;
		start++;
	}
	*(new_str + end + 1) = 0;
	return (new_str);
}
