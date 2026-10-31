/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 13:01:39 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 13:48:39 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(p_list **lst)
{
	p_list	*last_node;
	p_list	*current;
	p_list	*current1;
	int tmp;

	if (!lst || !*lst)
		return ;
	current = *lst;
	last_node = ft_lstlast(current);
	tmp = last_node -> content;
	current1 = ft_lstnew(tmp);
	ft_lstdellast(lst, last_node);
	ft_lstadd_front(lst, current1);
}