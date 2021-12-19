/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:26:47 by junholee          #+#    #+#             */
/*   Updated: 2021/05/23 16:32:10 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int ret;
	int minus;

	minus = 1;
	ret = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	if (*str == '-' || *str == '+')
		return (0);
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			ret = ret * 10 + *str - '0';
		else
			break ;
		str++;
	}
	return (ret * minus);
}
