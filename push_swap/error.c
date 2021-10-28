/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:24:21 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 20:52:22 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (!('0' <= s[i] && s[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

void error_check(char *s)
{
	if (check(s) == 1)
		write(1,"Error",7);
}