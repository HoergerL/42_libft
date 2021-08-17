/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 08:53:03 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:44:37 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function executes function f on every char in string s.
@return: The function returns a string with the converted chars.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s_res;

	i = 0;
	if (!s)
		return (0);
	s_res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s_res)
		return (0);
	while (s[i])
	{
		s_res[i] = f(i, s[i]);
		i++;
	}
	s_res[i] = '\0';
	return (s_res);
}
