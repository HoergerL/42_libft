/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:47:59 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:42:51 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function copies dstsize bytes from src to dst.
@return: The function returns the lenght of src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	len_src;
	unsigned int	i;

	len_src = 0;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (src[len_src])
		len_src++;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
