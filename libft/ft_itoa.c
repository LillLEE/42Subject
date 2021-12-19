/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:24:24 by junholee          #+#    #+#             */
/*   Updated: 2021/05/22 17:49:43 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_numsize(long long n)
{
	long long		size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char				*ft_itoa(int n)
{
	char			*str;
	int				size;
	long long		m;

	m = n;
	size = ft_numsize(m);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	str[size--] = '\0';
	if (m == 0)
		str[0] = '0';
	if (m < 0)
	{
		m *= -1;
		str[0] = '-';
	}
	while (m > 0)
	{
		str[size] = (m % 10) + '0';
		m /= 10;
		size--;
	}
	return (str);
}
