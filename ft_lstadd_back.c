/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:46:41 by jkwak             #+#    #+#             */
/*   Updated: 2022/01/06 03:23:21 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	list = (t_list *)*lst;
	while (1)
	{
		if (list->next == 0)
		{
			list->next = new;
			return ;
		}
		list = list->next;
	}
}
