/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 23:35:42 by jkwak             #+#    #+#             */
/*   Updated: 2022/01/06 03:13:14 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			i++;
		else
		{
			count++;
			while (*(s + i) != c)
				i++;
		}	
	}
	return (count);
}

char	**word_list(char **grp, char const *s, char c)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = 0;
	str = ft_strdup(s);
	while (*(str + i))
	{
		if (*(str + i) == c)
			i++;
		else
		{
			*(grp + count) = (str + i);
			while (*(str + i) != c)
				i++;
			count++;
		}
	}
	*(grp + count) = 0;
	return (grp);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**grp;

	count = word_count(s, c);
	grp = (char **)malloc(sizeof(char *) * (count + 1));
	if (!grp)
		return (NULL);
	grp = word_list(grp, s, c);
	return (grp);
}
