/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:07:21 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/25 21:08:31 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_data **a, t_data **b, int print)
{
	t_data	*temp;

	if (!(*b))
		return ;
	temp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = temp;
	if (print == 0)
		ft_printf("pa\n");
}

void	push_b(t_data **a, t_data **b, int print)
{
	t_data	*temp;

	if (!(*a))
		return ;
	temp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = temp;
	if (print == 0)
		ft_printf("pb\n");
}
