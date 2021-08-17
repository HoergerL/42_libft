/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:14:19 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:05:42 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function searches for the last element in the list lst and returns that.
@return: The function returns the last element in the list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstel;

	lstel = lst;
	if (!lst)
		return (0);
	while (lstel->next)
		lstel = lstel->next;
	return (lstel);
}
