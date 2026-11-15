/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcule_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yben-abd <yben-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:52:33 by yben-abd          #+#    #+#             */
/*   Updated: 2026/11/15 12:24:12 by yben-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <math.h>


float calculate_sqrt(int n)
{
    int guess;

    if (n < 0)
        return (-1);
    if (n == 0 || n == 1)
        return (n);
    guess = n;
    while (guess > n / guess)
        guess = (guess + n / guess) / 2;
    return ((float)guess);
}

int round_number(float n)
{
    return ((int)(n + 0.5));
}


int main()
{
	printf("%d", calculate_sqrt(17));
}