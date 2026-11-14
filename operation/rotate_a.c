/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 13:01:39 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/14 16:40:14 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(p_list **lst)
{
	p_list	*current;
	p_list	*new_node;
	int		temp;

	if (!lst || !*lst || ft_lstsize(*lst) == 1)
		return ;
	current = *lst;
	temp = current -> content;
	new_node = ft_lstnew(temp);
	if (!new_node)
		return ;
	ft_lstadd_back(lst, new_node);
	*lst = current -> next;
	free(current);
}
