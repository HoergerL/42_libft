/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:39:21 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/20 12:22:17 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t	cnt;
	size_t	len;
	
	len = ft_strlen(src);
	cnt = 0;
	if (dstsize == 0)
		return len;
	while (cnt < dstsize && cnt < len)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	dst[cnt] = '\0';
	return len;
}
