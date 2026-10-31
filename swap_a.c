/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:02:56 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 12:56:14 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_a(p_list **lst)
{
	p_list	*last_node;
	p_list	*node;
	p_list	*current;

	if (!lst || !*lst || ft_lstsize(*lst) == 1)
		return ;
	current = *lst;
	last_node = ft_lstlast(current);
	while(current != last_node)
	{
		node = current;
		current = current -> next; 
	}
	swap_content(&last_node, &node);
}
