/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:08:33 by yben-abd          #+#    #+#             */
/*   Updated: 2026/11/15 16:29:22 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void initial_list(t_list **lst)
{
    t_list *current;

    puts("1");
    current = *lst;
    while (current)
    {
        current->index = -1;
        current = current->next;
    }
}

void	set_index(t_list **lst, int size)
{
	puts("2");
	int	i;
	i = 0;
	initial_list(lst);
	while (i < size )
	{
		find_min(*lst, i);
		i++;
	}
}

void	ft_call(t_list **lst, int	loop, void(*f)(t_list **))
{
	puts("3");
	while (loop-- > 0)
		f(lst);
}

void	medium_sort(t_list **a, t_list **b)
{
	int				current_size;
	int				pos;
	int				i;
	int				loop;
	int				size;
	int				index;

	puts("5");
	size = ft_lstsize(*a);
	set_index(a, size);
	index = 0;
	while (*a)
	{
		puts("5.1");
		i = 0;
		while (i < calculate_sqrt(size) && *a)
		{
			puts("5.2");
			current_size = ft_lstsize(*a);
			pos = find_pos(*a, index);
			if (pos == -1)
			{
				puts("ERROR: index not found");
				return ;
			}
			if (pos == 0)
				push_a(a, b);
			else if (pos > current_size / 2)
			{
				puts("5.3");
				loop = current_size - pos;
				ft_call(a, loop, r_rotate_a);
				push_a(a, b);
			}
			else
			{
				puts("5.4");
				loop = pos;
				ft_call(a, loop, rotate_a);
				push_a(a, b);
			}
			index++;
			i++;
		}
	}
	i = 0;
	puts("5.5");
	while (i++ < size)
		push_b(a, b);
}
