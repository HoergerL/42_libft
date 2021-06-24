/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:50:35 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/24 10:42:50 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**get_result(char const *s, char c, char **str_ar, size_t len_s)
{
	const char *substr;
	size_t start_index;
	size_t len;
	char	*resultstr;
	size_t	i;

	len = 0;
	i = 0;
	substr = s;
	resultstr = NULL;
	start_index = 0;
	while (start_index < ft_strlen(s))
	{
		char *t = (char*) ft_memchr(substr, c, ft_strlen(s) - len - 1);
		if(start_index == 0 && t == NULL)
		{
			resultstr = ft_substr(s, start_index, len_s);
			str_ar[i] = resultstr;
			str_ar[len_s - 1] = (void*) NULL;
			return str_ar;

		}
		len = t - substr;
		if(len > 0)
			resultstr = ft_substr(s, start_index, len);
		else
		{
			t++;
			start_index++;
			resultstr = NULL;
		}
		if(resultstr != NULL)
		{
			str_ar[i] = resultstr;
			i++;
		}
		start_index = len + start_index;
		substr = t;
	}
	str_ar[i] = (void*) NULL;
	return str_ar;
}

char **ft_split(char const *s, char c)
{
	char	**str_ar;
	size_t len_s;
	
	if(!s || !c)
	{
		return NULL;
	}
	len_s = ft_strlen(s);
	if(len_s == 1)
	{
		len_s++;
	}
	if(len_s == 0)
	{
		len_s = 1;
	}
	str_ar = malloc(sizeof(char *) * len_s);
	if(!str_ar)
		return NULL;
	if(len_s == 1)
	{
		*str_ar = "\0";
	}
	return (get_result(s, c, str_ar, len_s));
}

