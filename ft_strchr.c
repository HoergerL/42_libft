/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:16:15 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:39:56 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function searches char c in string s.
@return: The function returns the place in memory where c is located.
*/

char	*ft_strchr(const char *s, int c)
{
	int	cnt;
	int	len;

	len = ft_strlen(s);
	cnt = 0;
	while (cnt <= len)
	{
		if (s[cnt] == c)
			return ((char *) &s[cnt]);
		cnt++;
	}
	return ((void *) 0);
}
