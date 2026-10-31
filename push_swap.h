/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:02:59 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 13:45:27 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define  PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct q_list
{
    int                 content;
    struct q_list       *next;   
} 
p_list;

void		swap_content( p_list **lst1, p_list **lst2);
void		swap_a(p_list **lst);
p_list		*ft_lstlast(p_list *lst);
void		ft_lstadd_front(p_list **lst, p_list *new);
void		ft_lstdellast(p_list **lst, p_list *last_node);
p_list		*ft_lstlast(p_list *lst);
void		rotate_a(p_list **lst);
void		swap_b(p_list **lst);
void		swap_s(p_list **lst);
p_list	*ft_lstnew(int content);

#endif