/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:04:05 by junholee          #+#    #+#             */
/*   Updated: 2021/05/22 18:53:54 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;

	if (!(*lst))
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = next;
	}
	*lst = NULL;
}
