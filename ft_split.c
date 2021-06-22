/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:50:35 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/22 16:51:24 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t start_index;
	size_t len;
	char	*resultstr;
	char	**str_ar;
	size_t	i;
	const char *substr;
	size_t len_s;
	
	substr = s;
	start_index = 0;
	if(!s || !c)
	{
		return NULL;
	}
	len_s = ft_strlen(s);
	if(len_s == 1)
	{
		len_s++;
	}
	str_ar = malloc(sizeof(char *) * len_s);
	len = 0;
	i = 0;
	if(!str_ar)
		return NULL;
	resultstr = NULL;
	while (start_index < ft_strlen(s))
	{
		char *t = (char*) ft_memchr(substr, c, ft_strlen(s) - len - 1);
		if(start_index == 0 && t == NULL)
		{
			resultstr = ft_substr(s, start_index, len_s);
			str_ar[i] = resultstr;
			break;
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

