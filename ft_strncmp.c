/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:48:44 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/20 15:15:40 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while ((s1[cnt] != '\0' || s2[cnt] != '\0') && cnt < n)
	{
		if (s1[cnt] != s2[cnt])
		{
			return (s1[cnt] - s2[cnt]);
		}
		cnt++;
	}
	return (0);
}
