/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:08:33 by yben-abd          #+#    #+#             */
/*   Updated: 2026/11/14 19:05:55 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void find_min(p_list *lst)
{
	int len;
	int min;
	int i;
	p_list *current;
	p_list *tmp;

	tmp = lst;
	min = tmp -> content;
	len = ft_lstsize(lst);
	i = 0;
	while (i < len)
	{
		tmp = tmp -> next;
		if (min > current -> content)
		{
			min = tmp -> content;
			current = tmp;
		}
		i++;
	}
	current -> index = 0;
}

void	medium_sort(p_list **a, p_list **b);