/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:30:15 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/22 09:49:17 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strfind(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		//printf("s[len]: %c, %i, %c\n", s[len], len, c);
		if (s[len] == c)
			return 1;
		len--;
	}
	//printf("return 0\n");
	return 0;
}

size_t findstart(char const *str, char const *set)
{
	size_t i;
	size_t start;
	
	i = 0;
	while (str[i])
	{
		//printf("Funktion return %i, cnt: %i\n", strfind(set, s1[i]), (int) len);
		if (!(strfind(set, str[i])))
		{
			//printf("found beginning at Index: %i\n", i);
			start = i;
			return start;
		}
		i++;
	}
	return 0;
}
size_t findend(char const *str, char const *set)
{
	size_t i;
	size_t start;
	
	i = ft_strlen(str) - 1;
	while (str[i])
	{
		//printf("Funktion return %i, cnt: %i\n", strfind(set, s1[i]), (int) len);
		if (!(strfind(set, str[i])))
		{
			//printf("found ending at Index: %i\n", i);
			start = i;
			return start;
		}
		i--;
	}
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	
	size_t len;
	size_t j;
	size_t i;
	char	*str2;

	i = 0;
	j = 0;
	len = 0;
	if(!s1 || !set)
		return (0);
	len = findend(s1, set) - findstart(s1, set);
	
	//printf("Len = %i\n", len);
	str2 = malloc(sizeof(char) * len + 2);
	if(!str2)
		return (0);
	if (len == 0)
	{
		str2[0] = '\0';
		return str2;
	}
	len = findstart(s1, set);
	while (len >= findstart(s1, set) && len <= findend(s1, set))
	{
		//printf("\n\n\n len: %i, s[i] = %c\n", len, s1[len]);
		//printf("C: %c\n", s1[len]);
		str2[i] = s1[len];
		len++;
		i++;
	}
	str2[i] = '\0';
	return str2;
}
