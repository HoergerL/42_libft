/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:50:35 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/22 15:47:07 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char **ft_split(char const *s, char c)
{
	size_t start_index = 0;
	size_t len;
	char	*resultstr;
	char	**str_ar;
	size_t	i;
	const char *substr;
	
	substr = s;
	str_ar = malloc(sizeof(char *) * ft_strlen(s));
	len = 0;
	i = 0;
	
	while (start_index < ft_strlen(s))
	{
		printf("substr %s, c: %c, len: %i\n", substr, c, (int) (ft_strlen(s) - 1 -start_index));
		char *t = (char*) ft_memchr(substr, c, ft_strlen(s) - len - 1);
		printf("pointer: %s\n", t);
		len = t - substr;
		printf("len: %i\n", (int) len);
		if(len > 0)
		{
			resultstr = ft_substr(s, start_index, len - 1);
			printf("resultstring: %s\n", resultstr);
		}
		else
		{
			len++;
		}
		
		if(resultstr != NULL)
		{
			str_ar[i] = resultstr;
			printf("######ADDED to char array: %s\n", resultstr);
			i++;
		}
		start_index = len + start_index;
		printf("neuer startindex: %i\n",(int) start_index);
		substr = t;
		printf("substr: %s\n\n\n", substr);
		
		
	}
	return str_ar;
	
	//memchr
	//get beginning and ending from substring
	//check whether their size is 1
	//create substring of that

	//iwie malloc für die char pointer
	
}

