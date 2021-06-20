/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 13:47:51 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/20 12:21:15 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void * dst, const void * src, int c, size_t n)
{
	size_t	i;
	char* src2;
	char* dest2;
	unsigned char var;

	src2 = (char*) src;
	dest2 = (char*) dst;
	var = (unsigned char) c;
	

	i = 0;
	while (i < n)
		{
			dest2[i] = src2[i];
			

			if (src2[i] == var)
			return (void*) &dest2[i];
			i++;
		}
	return NULL;
}
