/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:08:33 by yben-abd          #+#    #+#             */
/*   Updated: 2026/11/15 13:54:36 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_min(t_list *lst, int index)
{
	t_list		*current;
	t_list		*tmp;
	long		min;

	tmp = lst;
	while (tmp && tmp->index != -1)
		tmp = tmp->next;
	if (!tmp)
		return ;
	min = tmp->content;
	current = tmp;
	tmp = lst;
	while (tmp)
	{
		if (tmp->index == -1 && min > tmp->content)
		{
			min = tmp->content;
			current = tmp;
		}
		tmp = tmp->next;
	}
	current->index = index;
}

void	medium_sort(t_list **a)
{
	unsigned int	i;

	i = 0;
	while (i < ft_lstsize(*a))
	{
		find_min(*a, i);
		i++;
	}
}
