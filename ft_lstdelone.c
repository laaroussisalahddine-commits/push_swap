/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 13:08:56 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 14:31:13 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdellast(p_list **lst, p_list *last_node)
{
	p_list *current;
	p_list *current1;
	p_list *node;

	if (!lst || !*lst || !last_node)
		return ;
	current = *lst;
	while(current != last_node)
	{
		node = current;
		if (current -> next = last_node)
		{
			current -> next = NULL;
			break;
		}
		current = current -> next;
	}
	free (node);
}
