/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 16:28:14 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/15 13:04:39 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_list **a, t_list **b)
{
	t_list	*current;
	t_list	*new;
	int		tmp;

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
