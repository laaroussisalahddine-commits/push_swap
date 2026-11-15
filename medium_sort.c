/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:08:33 by yben-abd          #+#    #+#             */
/*   Updated: 2026/11/15 13:08:31 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_min(t_list *lst, int index)
{
	t_list	*current;
	t_list	*tmp;
	long	min;
	int		i;

	current = lst;
	tmp = lst;
	if (tmp-> index == -1)
		min = tmp-> content;
	else
		min = tmp -> next-> content;
	i = 0;
	while (i < ft_lstsize(lst) - 1)
	{
		tmp = tmp -> next;
		if (min > tmp -> content && tmp->index == -1)
		{
			min = tmp -> content;
			current = tmp;
		}
		i++;
	}
	current->index = index;
}

void	medium_sort(t_list **a)
{
	int	i;
	int	index;

	index = 0;
	i = 0;
	while (i < 3)
	{
		find_min(*a, index);
		index++;
		i++;
	}
}
