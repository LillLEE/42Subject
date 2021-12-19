/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:57:31 by junholee          #+#    #+#             */
/*   Updated: 2021/05/23 16:29:53 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str1)
{
	char	*str;
	int		size;

	size = ft_strlen(str1);
	str = (char *)malloc(sizeof(char) * (size + 1));
	ft_strlcpy(str, str1, size + 1);
	return (str);
}
