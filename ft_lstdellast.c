/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdellast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 13:08:56 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 15:35:42 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdellast(p_list **lst, p_list *last_node)
{
	p_list *current;

	if (!lst || !*lst || !last_node)
		return ;
	current = *lst;
	while(current)
	{
		if (current -> next == last_node)
			current -> next = NULL;
		current = current -> next;
	}
	free (last_node);
	last_node = NULL;
}
