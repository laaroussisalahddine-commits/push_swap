/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_content.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:56:23 by slaarous          #+#    #+#             */
/*   Updated: 2026/11/15 13:06:10 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_content( t_list **lst1, t_list **lst2)
{
	int	temp;

	temp = (*lst1)-> content;
	(*lst1)-> content = (*lst2)-> content;
	(*lst2)-> content = temp;
}
