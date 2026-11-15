/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:43:10 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/15 13:04:47 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_rotate_a(t_list **lst)
{
	t_list	*last_node;
	t_list	*current;
	t_list	*new_node;
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
	ft_lstadd_front(lst, new_node);
}
