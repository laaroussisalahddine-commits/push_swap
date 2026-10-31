/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 16:28:14 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 16:56:23 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(p_list **a, p_list **b)
{
	p_list *current;
	p_list *last;
	p_list *new;
	int tmp;
	
	if (!a || !*a)
		return ;
	current = *a;
	last = ft_lstlast(current);
	tmp = last -> content;
	new = ft_lstnew(tmp);
	if (!new)
		return ;
	ft_lstadd_front(b, new);
	if (ft_lstsize(*a) == 1)
	{
		ft_lstdellast(a, last);
		*a = NULL;
	}
	else
	{
		ft_lstdellast(a, last);
	}
}
