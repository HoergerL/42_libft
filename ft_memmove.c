/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:36:37 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/20 15:43:11 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_else(size_t len, char *src2, char *dest2, const void *src)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = len - 1;
	if (len > ft_strlen(src))
		dest2[j + 1] = '\0';
	while (i < len)
	{
		dest2[j] = src2[j];
		i++;
		j--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src2;
	char	*dest2;

	src2 = (char *) src;
	dest2 = (char *) dst;
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
		ft_else(len, src2, dest2, src);
	}
	return (dst);
}
