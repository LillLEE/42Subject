/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:04:41 by junholee          #+#    #+#             */
/*   Updated: 2021/05/22 16:59:13 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *horse;

	horse = lst;
	if (lst == NULL || f == NULL)
		return ;
	while (horse->next != NULL)
	{
		f(horse->content);
		horse = horse->next;
	}
	f(horse->content);
}
