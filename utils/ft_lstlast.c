/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:47:20 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 13:11:13 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

p_list	*ft_lstlast(p_list *lst)
{
	p_list	*current;

	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		current = lst;
		lst = lst -> next;
	}
	return (current);
}
