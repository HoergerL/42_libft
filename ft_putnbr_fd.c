/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:04:13 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/22 17:21:45 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		write(fd, "-2147483648", ft_strlen("-2147483648"));;
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
	}
	else if(n / 10 == 0)
	{
		n = n + 48;
		write(fd, &n, 1);
	}
	else 
	{
		
		ft_putnbr_fd()
	}
}