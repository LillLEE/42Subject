/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 00:51:05 by junholee          #+#    #+#             */
/*   Updated: 2021/05/13 15:16:35 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(num * size)))
		return (NULL);
	ft_memset(ptr, 0, num * size);
	return (ptr);
}
