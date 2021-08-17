/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:10:04 by lhoerger          #+#    #+#             */
/*   Updated: 2021/08/17 16:04:14 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function iterates over the list lst and uses the function f on every element.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr_el;

	while (lst)
	{
		curr_el = lst;
		lst = (lst)->next;
		f(curr_el -> content);
	}
}
