/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:15:22 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:46:47 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h> 

/* 
This function searches the string needle in the string haystack for len bytes.
@return: The function returns a pointer to the place where the needle starts in the haystack.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0 || len == 0)
		return ((char *) haystack);
	if (ft_strlen(haystack) == 0)
		return (NULL);
	while (i < len && haystack[i] != '\0')
	{
		temp = i;
		while (haystack[i] == needle[j] && i < len)
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
