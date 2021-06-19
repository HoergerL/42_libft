/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 13:34:37 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/19 13:40:55 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void * dst, const void * src, size_t n)
{
	size_t	i;
	char* src2;
	char* dest2;

	src2 = (char*) src;
	dest2 = (char*) dst;

	i = 0;
	while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	return dst;
}
