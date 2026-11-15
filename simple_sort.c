/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 13:11:27 by yben-abd          #+#    #+#             */
/*   Updated: 2026/11/15 13:11:31 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_len(t_list **a, t_list **b)
{
	int		len;
	t_list	*current;

	len = ft_lstsize(*a);
	if (len == 2)
	{
		current = *a;
		if (current->content > current->next->content)
			swap_a(a);
		return ;
	}
	while (len > 2)
	{
		push_b(a, b);
		len--;
	}
}

int	is_sort(t_list *lst)
{
	int	is_sort;

	is_sort = 0;
	while (lst->next != NULL && lst->content < lst->next->content)
		lst = lst -> next;
	if (lst->next == NULL)
		is_sort = 1;
	return (is_sort);
}

void	simple_sort(t_list **a, t_list **b)
{
	t_list	*current;
	t_list	*suiv;

	if (!a || !*a || !(*a)->next)
		return ;
	while (!is_sort(*a))
	{
		check_len(a, b);
		while (*b != NULL)
		{
			current = *a;
			suiv = current->next;
			if (suiv != NULL && current->content > suiv->content)
				swap_a(a);
			push_a(a, b);
		}
		if (*b == NULL)
		{
			current = *a;
			suiv = current->next;
			if (suiv != NULL && current->content > suiv->content)
				swap_a(a);
		}
	}
}
