/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 13:01:39 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 15:48:08 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(p_list **lst)
{
	p_list	*last_node;
	p_list	*current;
	p_list	*new_node;
	int		tmp;

	if (!lst || !*lst || ft_lstsize(*lst) == 1)
		return ;
	current = *lst;
	last_node = ft_lstlast(current);
	tmp = last_node -> content;
	new_node = ft_lstnew(tmp);
	if (!new_node)
		return ;
	ft_lstdellast(lst, last_node);
	ft_lstadd_front(lst,new_node);
}
