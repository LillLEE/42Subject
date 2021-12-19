/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:06:21 by junholee          #+#    #+#             */
/*   Updated: 2021/05/13 21:40:46 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*src1;
	size_t		i;

	i = 0;
	dest1 = (char *)dest;
	src1 = (const char *)src;
	if (dest1 == src1 || (dest1 == NULL && src1 == NULL))
		return (dest1);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}
