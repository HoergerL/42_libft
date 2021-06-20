/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:15:22 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/20 15:44:03 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	if (haystack[0] == '\0')
		return ((char *) &haystack[0]);
	while (i < len && haystack[i] != '\0')
	{
		temp = i;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *) &haystack[i - j]);
		}
		j = 0;
		i = temp + 1;
	}
	return ((void *) 0);
}
