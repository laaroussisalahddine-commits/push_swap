/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 13:08:03 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/14 16:40:57 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(p_list **lst, p_list *new)
{
	p_list	*current;

	if (!lst || !new)
		return ;
	current = *lst;
	*lst = new;
	new -> next = current;
}
