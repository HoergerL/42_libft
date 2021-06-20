/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 15:36:24 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/20 15:12:33 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cnt;
	char	*s1c;
	char	*s2c;

	s1c = (char *) s1;
	s2c = (char *) s2;
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
