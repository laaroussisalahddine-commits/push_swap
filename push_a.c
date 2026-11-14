/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 16:57:06 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/14 15:21:44 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(p_list **a, p_list **b)
{
	p_list *current;
	p_list *new;
	int tmp;
	
	if (!b || !*b)
		return ;
	current = *b;
	tmp = current -> content;
	new = ft_lstnew(tmp);
	if (!new)
		return ;
	ft_lstadd_front(a, new);
	if (ft_lstsize(*b) == 1)
	{
		ft_lstdelfirst(b);
		*b = NULL;
	}
	else
		ft_lstdelfirst(b);
}
