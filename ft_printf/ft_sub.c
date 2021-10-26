/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:38:11 by junholee          #+#    #+#             */
/*   Updated: 2021/10/26 15:03:31 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(int n)
{
	int	size;

	size = ft_putchr(n);
	return (size);
}

int	print_s(char *str)
{
	int	size;

	size = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[size])
	{
		ft_putchr(str[size]);
		size++;
	}
	return (size);
}

int	print_i(int n)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		i++;
	}
	str = ft_itoa_base(n, 'i');
	if (str == NULL)
		return (-1);
	size = i + write(1, str, ft_strlen(str));
	free(str);
	return (size);
}

int	print_x(unsigned int n)
{
	char	*str;
	int		size;

	str = ft_itoa_base(n, 'x');
	size = write(1, str, ft_strlen(str));
	free(str);
	return (size);
}

int	print_X(unsigned int n)
{
	char	*str;
	int		size;

	str = ft_itoa_base(n, 'X');
	size = write(1, str, ft_strlen(str));
	free(str);
	return (size);
}
