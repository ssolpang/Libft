/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 23:50:12 by jkwak             #+#    #+#             */
/*   Updated: 2022/01/10 21:06:51 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (1)
	{
		if (lst->next == 0)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
