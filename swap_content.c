/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_content.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaarous <slaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:56:23 by slaarous          #+#    #+#             */
/*   Updated: 2026/10/31 13:20:11 by slaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_content( p_list **lst1, p_list **lst2)
{
	int	temp;

	temp = (*lst1) -> content;
	(*lst1) -> content = (*lst2) -> content;
	(*lst2) -> content = temp;
}
