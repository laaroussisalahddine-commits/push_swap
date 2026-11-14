/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 13:08:56 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/14 16:41:03 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstdelfirst(p_list **lst)
{
	p_list *current;

	if (!lst || !*lst)
		return ;
	current = *lst;
	*lst = current -> next;
	free (current);
}
