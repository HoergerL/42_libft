/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:50:35 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/24 13:39:28 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*set_res(size_t *cnt, char *resultstr, char const *s, char **t)
{
	if (cnt[1] > 0)
	{
		resultstr = ft_substr(s, cnt[0], cnt[1]);
		return (resultstr);
	}
	else
	{
		(*t)++;
		cnt[0]++;
		resultstr = NULL;
		return (resultstr);
	}
}

static char	*ft_setcnt(size_t *cnt, const char *s, const char *substr)
{
	cnt[0] = 0;
	cnt[1] = 0;
	cnt[2] = 0;
	substr = s;
	return ((char *) substr);
}

char	**get_result(char const *s, char c, char **str_ar, size_t len_s)
{
	const char	*substr;
	size_t		cnt[3];
	char		*resultstr;
	char		*t;

	substr = (const char *) ft_setcnt(cnt, s, substr);
	while (cnt[0] < ft_strlen(s))
	{
		t = (char *) ft_memchr(substr, c, ft_strlen(s) - cnt[1] - 1);
		if (cnt[0] == 0 && t == NULL)
		{
			resultstr = ft_substr(s, cnt[0], len_s);
			str_ar[cnt[2]] = resultstr;
			str_ar[len_s - 1] = (void *) NULL;
			return (str_ar);
		}
		cnt[1] = t - substr;
		resultstr = set_res(&cnt[0], resultstr, s, &t);
		if (resultstr != NULL)
			str_ar[cnt[2]++] = resultstr;
		cnt[0] = cnt[1] + cnt[0];
		substr = t;
	}
	str_ar[cnt[2]] = (void *) NULL;
	return (str_ar);
}

char	**ft_split(char const *s, char c)
{
	char	**str_ar;
	size_t	len_s;

	if (!s || !c)
	{
		return (NULL);
	}
	len_s = ft_strlen(s);
	if (len_s == 1)
	{
		len_s++;
	}
	if (len_s == 0)
	{
		len_s = 1;
	}
	str_ar = malloc(sizeof(char *) * len_s);
	if (!str_ar)
		return (NULL);
	if (len_s == 1)
	{
		*str_ar = "\0";
	}
	return (get_result(s, c, str_ar, len_s));
}
