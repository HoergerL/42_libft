/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 13:43:24 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/21 13:24:30 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void * point;

	if(count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	
	point = malloc(size * count);
	if (!point)
		return (0);
	ft_bzero(point, size * count);
	return point;
}
