/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:23:39 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/19 11:34:25 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *	ft_memset(void *b, int c, size_t len)
{
	size_t cnt;
	
	cnt = 0;
	char* str = (char*) b;
	unsigned char var = (unsigned char) c;
	
	while (cnt < len)
	{
		str[cnt] = var;
		cnt++;
	}
	return (b);
}
