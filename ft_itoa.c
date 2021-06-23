/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:43:43 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/23 16:22:00 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_lenHelper(unsigned x) {
	if (x >= 1000000000) return 10;
	if (x >= 100000000)  return 9;
	if (x >= 10000000)   return 8;
	if (x >= 1000000)    return 7;
	if (x >= 100000)     return 6;
	if (x >= 10000)      return 5;
	if (x >= 1000)       return 4;
	if (x >= 100)        return 3;
	if (x >= 10)         return 2;
	return 1;
}

char *ft_itoa(int n)
{
	char	*str;
	int	len;
	int is_minus;

	is_minus = 0;
	if(n == -2147483648)
	{
		return ft_strdup("-2147483648");;
	}
	if (n < 0)
	{
		len = ft_lenHelper(-n);
		len++;
	}
	else
	{
		len = ft_lenHelper(n);
	}
	//printf("len: %i\n", len);
	str = (char *) malloc(sizeof(char) * len + 1);
	if(!str)
		return NULL;

	str[len] = '\0';
	len--;
	if(n < 0)
	{
		str[0] = '-';
		is_minus = 1;
		n = -n;
	}
	while (len >= 0)
	{
		str[len] = (char) (n % 10) + 48;
		n = n / 10;
		//printf("%c\n", str[len]);
		len--;
		if(len == 0 && is_minus == 1)
			return str;
	}
	return str;
}

