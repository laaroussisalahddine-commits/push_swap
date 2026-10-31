/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:43:10 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 16:03:15 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_a(p_list **lst)
{
	p_list	*current;
	p_list	*new_node;
	int		temp;

	if (!lst || !*lst)
		return ;
	current = *lst;
	temp = current -> content;
	new_node = ft_lstnew(temp);
	if (!new_node)
		return ;
	ft_lstadd_back(lst, new_node);
	*lst = (*lst) -> next;
	free(current);
}
