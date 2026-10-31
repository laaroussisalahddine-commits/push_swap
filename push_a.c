/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 16:57:06 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 17:00:46 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(p_list **a, p_list **b)
{
	p_list *current;
	p_list *last;
	p_list *new;
	int tmp;
	
	if (!b || !*b)
		return ;
	current = *b;
	last = ft_lstlast(current);
	tmp = last -> content;
	new = ft_lstnew(tmp);
	if (!new)
		return ;
	ft_lstadd_front(a, new);
	ft_lstdellast(b, last);
}