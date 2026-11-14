/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 16:28:14 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/14 16:39:55 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(p_list **a, p_list **b)
{
	p_list *current;
	p_list *new;
	int tmp;
	
	if (!a || !*a)
		return ;
	current = *a;
	tmp = current -> content;
	new = ft_lstnew(tmp);
	if (!new)
		return ;
	ft_lstadd_front(b, new);
	if (ft_lstsize(*a) == 1)
	{
		ft_lstdelfirst(a);
		*a = NULL;
	}
	else
		ft_lstdelfirst(a);
}
