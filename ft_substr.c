/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:32:41 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/21 14:46:22 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
		char	*s2;
		size_t len_substr;

		if(!s || len == 0)
			return (0);
		len_substr = ft_strlen(&s[start]);
		if(len_substr > len)
			len_substr = len;
		s2 = malloc(sizeof(char) * len + 1);
		if (!s2)
			return (0);
		if(start > ft_strlen(s))
			return s2;
		ft_memcpy(s2, &s[start], len_substr);
		s2[len_substr] = '\0';
		return s2;
}
