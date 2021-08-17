/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 13:43:24 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 15:48:36 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function allocates count * size memory and overwrites the memory with '\0'.
@return: The function returns a pointer pointing to the begin of the memory.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*point;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	point = malloc(size * count);
	if (!point)
		return (0);
	ft_bzero(point, size * count);
	return (point);
}
