/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 16:57:06 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/15 13:04:25 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*current;
	t_list	*new;
	int		tmp;

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
