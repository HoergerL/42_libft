/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:14:19 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/23 12:16:26 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	size_t i;
	t_list* lstel;

	i = 1;
	lstel = lst;
	if(!lst)
		return (0);
	while (lstel->next)
	{
		lstel = lstel->next;
		i++;
	}
	return lstel;
}