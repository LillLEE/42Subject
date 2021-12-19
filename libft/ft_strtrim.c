/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 00:49:07 by junholee          #+#    #+#             */
/*   Updated: 2021/05/13 13:21:21 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	sp;
	size_t	ep;

	if (!s1 || !set)
		return (NULL);
	sp = 0;
	ep = ft_strlen(s1);
	while (s1[sp] && ft_strchr(set, s1[sp]))
		sp++;
	while (s1[ep - 1] && ft_strchr(set, s1[ep - 1]) && ep > sp)
		ep--;
	if (!(str = (char *)malloc(sizeof(char) * (ep - sp + 1))))
		return (str);
	ft_strlcpy(str, s1 + sp, ep - sp + 1);
	return (str);
}
