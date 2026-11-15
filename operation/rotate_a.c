/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 13:01:39 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/15 13:05:00 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_list **lst)
{
	t_list	*current;
	t_list	*new_node;
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
