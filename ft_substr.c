/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:32:41 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/20 16:54:00 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
		char	*s2;
		size_t len_substr;

		len_substr = strlen(&s[start]);
		
		s2 = malloc(sizeof(char) * len + 1);
}