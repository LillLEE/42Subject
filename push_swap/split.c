/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:56:01 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 21:15:39 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		is_find(char c, char s)
{
	if (c == s)
		return (1);
	return (0);
}

static int		wrd_cnt(char const *s, char c)
{
	size_t		cnt;

	cnt = 0;
	if (is_find(*s, c))
		s++;
	while (*s)
	{
		if (!(is_find(*s, c)) && (is_find(*(s + 1), c) || *(s + 1) == '\0'))
			cnt++;
		s++;
	}
	return (cnt);
}

static char		*ft_memfree(char **memf, size_t arr_size)
{
	size_t		i;

	i = 0;
	while (i < arr_size)
	{
		free(memf[i]);
		i++;
	}
	free(memf);
	return (NULL);
}

static char		**resultsplit(char **str, char const *s, size_t size, char c)
{
	size_t		i;
	char const	*start;

	i = 0;
	str[size] = 0;
	while (*s && i < size)
	{
		while (is_find(*s, c))
			s++;
		start = s;
		while (!(is_find(*s, c)) && *s != '\0')
			s++;
		if (!(str[i] = (char *)malloc(sizeof(char) * (s - start + 1))))
			ft_memfree(str, size + 1);
		ft_strlcpy(str[i], start, s - start + 1);
		i++;
	}
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char		**str;
	size_t		size;

	if (!(s))
		return (NULL);
	size = wrd_cnt(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	return (resultsplit(str, s, size, c));
}
