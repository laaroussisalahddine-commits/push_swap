/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:02:59 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/15 13:15:12 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct q_list
{
	int				content;
	int				index;
	struct q_list	*next;
}	t_list;

void			swap_content( t_list **lst1, t_list **lst2);
void			swap_a(t_list **lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstdelfirst(t_list **lst);
t_list			*ft_lstlast(t_list *lst);
void			rotate_a(t_list **lst);
void			swap_b(t_list **lst);
void			swap_s(t_list **lst, t_list **lst1);
t_list			*ft_lstnew(int content);
void			rotate_b(t_list **lst);
void			rotate_r(t_list **lst, t_list **lst1);
void			r_rotate_a(t_list **lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			r_rotate_r(t_list **lst, t_list **lst1);
void			r_rotate_b(t_list **lst);
void			push_b(t_list **a, t_list **b);
void			push_a(t_list **a, t_list **b);
unsigned int	ft_lstsize(t_list *lst);
void			simple_sort(t_list **a, t_list **b);
void			ft_lstdellast(t_list **lst, t_list *last_node);
void			medium_sort(t_list **a);
int				calculate_sqrt(int nb);

#endif