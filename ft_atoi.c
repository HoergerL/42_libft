/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:57:27 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/24 09:27:13 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function checks for minuses and mistakes in the string. 
The number read by print_numb() will be mulitplied by the return value of this function.
@return: So if there is a minus, it will return -1, if there is an error it will return 0 and if there is a plus the result will be 1.
*/
static int	check_minus(const char *str, int len)
{
	int	cnt;

	cnt = 0;
	while ((str[cnt] >= 9 && str[cnt] <= 13) || str[cnt] == 32)
		cnt++;
	if (cnt < len - 1)
	{
		if (str[cnt] == '-' && (str[cnt + 1] >= '0' && str[cnt + 1] <= '9'))
			return (-1);
		if (str[cnt] == '+' && (str[cnt + 1] >= '0' && str[cnt + 1] <= '9'))
			return (1);
	}
	if (str[cnt] >= '0' && str[cnt] <= '9')
		return (1);
	return (0);
}

/* 
This function translates the string into an integer
@return: It will return the number independent of the sign
*/
static int	print_numb(const char *str)
{
	int	cnt;
	int	nb;

	nb = 0;
	cnt = 0;
	while (str[cnt] < '0')
	{
		cnt++;
	}
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		nb = nb * 10 + str[cnt] - 48;
		cnt++;
	}
	return (nb);
}
/* 
This function reads in a String, starting with whitespaces and either a plus or a minus followed by a number.
@return: The function will return a number with the correct sign, or 0 if the syntax of the function wasn't correct
*/
int	ft_atoi(const char *str)
{
	int	minus;
	int	nb;
	int	len;

	if (str[0] == '\0')
	{
		return (0);
	}
	len = ft_strlen(str);
	minus = check_minus(str, len);
	nb = print_numb(str);
	return (minus * nb);
}
