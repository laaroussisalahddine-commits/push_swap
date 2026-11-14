/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:08:33 by yben-abd          #+#    #+#             */
/*   Updated: 2026/11/14 19:57:19 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void find_min(p_list *lst, int index)
{
	p_list *current;
	p_list *tmp;
	long min;
	int i;

	current = lst;
	tmp = lst;
	if (tmp->index == -1)
		min = tmp -> content;
	else
		min = tmp -> next -> content;
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

void	medium_sort(p_list **a)
{
	int i;
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


#include "push_swap.h"
#include <stdio.h>

int main(void)
{
    p_list *lst;
    p_list *tmp;
    int values[] = {42, 15, 8, 30, -4};
    int i;

    lst = NULL;
    i = 0;
    while (i < 5)
    {
        tmp = malloc(sizeof(p_list));
        if (!tmp)
            return (1);
        tmp->content = values[i];
        tmp->index = -1;
        tmp->next = lst;
        lst = tmp;
        i++;
    }
	p_list *temp = lst;
    puts("========================");
	while (temp)
    {
        printf("%d ",temp->content);
        temp = temp->next;
    }
	puts("\n========================\n");
    medium_sort(&lst);

    tmp = lst;
	puts("========================");
    while (tmp)
    {
        printf("Value: %d | Index: %d\n",
            tmp->content, tmp->index);
        tmp = tmp->next;
    }
	puts("========================");
    while (lst)
    {
        tmp = lst->next;
        free(lst);
        lst = tmp;
    }
    return (0);
}