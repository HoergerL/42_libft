/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:51:18 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:08:55 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function calculates the size of the list lst.
@return: The function returns the size of the list lst.
*/

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*lstel;

	i = 1;
	lstel = lst;
	if (!lst)
		return (0);
	while (lstel->next)
	{
		lstel = lstel->next;
		i++;
	}
	return (i);
}
