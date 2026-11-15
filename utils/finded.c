/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finded.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 13:55:40 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/15 16:27:33 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_min(t_list *lst, int index)
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

int find_pos(t_list *lst, int index)
{
    t_list *current;
    int    pos;

    pos = 0;
    current = lst;
    while (current && current->index != index)
    {
        current = current->next;
        pos++;
    }
    if (current)
        return (pos);
    return (-1);
}
