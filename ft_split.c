/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:50:35 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:38:55 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);

/* 
This function allocates memory for the result.
@return: The function returns 1 if the allocation worked and 0 if not.
*/

int	ft_create_result(char ***result, char *s)
{
	*result = malloc(sizeof(char *) * ft_strlen(s) + 1);
	if (!*result)
		return (0);
	return (1);
}

/* 
This function sets different variables.
*/

void	ft_set_zero(int *i, int *j, int *l)
{
	*i = 0;
	*j = 0;
	*l = 0;
}

/* 
This function jumps to the next char if the end of the string isn't reached.
@return: The function returns the index where to continue.
*/
int	ft_jump_to_end(char *s, int i)
{
	if (s[i])
		i++;
	return (i);
}

/* 
This function jumps to the end of a word.
@return: The function returns the index of the end of the word.
*/
int	ft_jump_to_word_end(char *s, char c, int i)
{
	while (s[i] == c && s[i])
		i++;
	return (i);
}

/* 
This function splits string s by character c.
@return: The function returns an array of strings which were splitted by c.
*/
char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		l;

	ft_set_zero(&i, &j, &l);
	if (!s || !ft_create_result(&result, (char *) s))
		return (0);
	while (s[i])
	{
		i = ft_jump_to_word_end((char *)s, c, i);
		if (s[i])
		{
			j = i;
			while (s[i] != c && s[i])
				i++;
			result[l] = malloc(i - j + 1);
			ft_memcpy(result[l], &(s[j]), i - j);
			result[l][i - j] = 0;
			l++;
		}
		i = ft_jump_to_end((char *) s, i);
	}
	result[l] = 0;
	return (result);
}