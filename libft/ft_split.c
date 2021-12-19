/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 12:32:21 by junholee          #+#    #+#             */
/*   Updated: 2021/06/21 16:00:21 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wrd_cnt(char const *s, char c)
{
	size_t		size;

	size = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c && *s)
		{
			size++;
			while (*s && *s != c)
				s++;
		}
	}
	return (size);
}

static void		ft_strcpy2(char *dest, char const *src, size_t from, size_t to)
{
	while (from < to)
	{
		*dest = src[from];
		dest++;
		from++;
	}
	*dest = 0;
}

static char		**memfree(char **memf, size_t size)
{
	size_t		i;

	i = 0;
	while (i < size)
	{
		free(memf[i]);
		i++;
	}
	free(memf);
	return (NULL);
}

static char		**resultsplit(char const *s, char c, char **ret)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			k = i;
			while (s[i] != 0 && s[i] != c)
				i++;
			if (!(ret[j] = (char *)malloc(sizeof(char) * (i - k + 1))))
				return (memfree(ret, j));
			ft_strcpy2(ret[j], s, k, i);
			j++;
		}
		if (!s[i])
			break ;
		i++;
	}
	return (ret);
}

char			**ft_split(char const *s, char c)
{
	char		**ret;
	size_t		len;

	if (s == NULL)
		return (NULL);
	len = wrd_cnt(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	ret[len] = 0;
	if (len == 0)
		return (ret);
	return (resultsplit(s, c, ret));
}
