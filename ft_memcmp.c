/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 15:36:24 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:14:18 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function compares s1 with s2 for n bytes.
@return: The function returns the difference between the first differing chars.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cnt;
	unsigned char	*s1c;
	unsigned char	*s2c;

	s1c = (unsigned char *) s1;
	s2c = (unsigned char *) s2;
	cnt = 0;
	while (cnt < n)
	{
		if (s1c[cnt] != s2c[cnt])
		{
			return (s1c[cnt] - s2c[cnt]);
		}
		cnt++;
	}
	return (0);
}
