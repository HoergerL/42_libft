/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:04:13 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:33:25 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function prints number n to file descripor fd.
*/

void	ft_putnbr_fd(int n, int fd)
{
	int	new_n;

	new_n = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", ft_strlen("-2147483648"));
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n / 10 == 0)
	{
		n = n + 48;
		write(fd, &n, 1);
		return ;
	}
	new_n = n / 10;
	ft_putnbr_fd(new_n, fd);
	n = (n % 10) + 48;
	write(fd, &n, 1);
}
