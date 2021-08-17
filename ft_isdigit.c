/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:16:23 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 15:51:09 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function checks if the character c is digital.
@return: The function return 1 if c is digital, if not it returns 0.
*/

int	ft_isdigit(int c)
{
	 	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
