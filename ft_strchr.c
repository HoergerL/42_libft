/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:16:15 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/16 16:16:45 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	cnt;

	cnt = 0;
	while (s[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

char	*ft_strchr(const char *s, int c)
{
	int	cnt;
	int	len;

	len = ft_strlen(s);
	cnt = 0;
	while (cnt <= len)
	{
		if (s[cnt] == c)
			return ((char*) &s[cnt]);
		cnt++;
	}
	return ((void*) 0);
}
