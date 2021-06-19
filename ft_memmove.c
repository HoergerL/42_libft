/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:36:37 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/19 17:40:32 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	cnt;
	
	cnt = 0;
	while (s[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}


void *	ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;
	char* src2;
	char* dest2;

	src2 = (char*) src;
	dest2 = (char*) dst;
	
	i = 0;
	if (src >= dst)
	{

		while (i < len)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	else
	{
		j = len - 1;
		if (len > ft_strlen(src))
		{
			dest2[j + 1] = '\0';
		}
		while (i < len)
		{
			dest2[j] = src2[j];
			i++;
			j--;
		}
		
	}
	return dst;
}
