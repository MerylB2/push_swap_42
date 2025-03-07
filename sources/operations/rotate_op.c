/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:07:13 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/25 21:10:43 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	rotate_op(t_data **stack)
{
	t_data	*temp;

	temp = *stack;
	*stack = find_last_node(*stack);
	(*stack)->next = temp;
	*stack = temp->next;
	temp->next = NULL;
}

void	rotate_a(t_data **a, int print)
{
	if (!(*a) || !(*a)->next)
		return ;
	rotate_op(a);
	if (print == 0)
		ft_printf("ra\n");
}

void	rotate_b(t_data **b, int print)
{
	if (!(*b) || !(*b)->next)
		return ;
	rotate_op(b);
	if (print == 0)
		ft_printf("rb\n");
}

void	rotate_r(t_data **a, t_data **b, int print)
{
	if (!(*a) || !((*a)->next) || !(*b) || !((*b)->next))
		return ;
	rotate_op(a);
	rotate_op(b);
	if (print == 0)
		ft_printf("rr\n");
}
