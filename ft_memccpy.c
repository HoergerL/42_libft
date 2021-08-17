/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 13:47:51 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:11:41 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function copies n bytes from src to dst. It stops when it finds c.
@return: The function returns a pointer to the char after c or NULL if c wasn't found.
*/

void	*ft_memccpy(void	*dst, const void	*src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dest2;
	unsigned char	var;

	src2 = (unsigned char *) src;
	dest2 = (unsigned char *) dst;
	var = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		dest2[i] = (unsigned char) src2[i];
		if (src2[i] == var)
			return ((void *) &dest2[i + 1]);
		i++;
	}
	return ((void *)(NULL));
}
