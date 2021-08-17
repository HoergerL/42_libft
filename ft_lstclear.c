/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:21:55 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 15:57:42 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function uses the del function to delete all the elements of the list lst
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr_el;

	while (*lst)
	{
		curr_el = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(curr_el, del);
	}
}
