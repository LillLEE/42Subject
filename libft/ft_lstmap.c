/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:04:49 by junholee          #+#    #+#             */
/*   Updated: 2021/05/22 21:05:25 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*updatelst;

	if (!lst || !(newlst = ft_lstnew(f(lst->content))))
		return (NULL);
	updatelst = newlst;
	lst = lst->next;
	while (lst)
	{
		if (!(newlst = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&updatelst, del);
			return (NULL);
		}
		ft_lstadd_back(&updatelst, newlst);
		lst = lst->next;
	}
	return (updatelst);
}
