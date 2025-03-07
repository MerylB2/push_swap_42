/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rev_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:07:08 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/25 21:02:15 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_rev_op(t_data **stack)
{
	t_data	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while ((*stack)->next)
	{
		i++;
		*stack = (*stack)->next;
	}
	(*stack)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
}

void	rotate_rev_a(t_data **a, int print)
{
	if (!*a || !(*a)->next)
		return ;
	rotate_rev_op(a);
	if (print == 0)
		ft_printf("rra\n");
}

void	rotate_rev_b(t_data **b, int print)
{
	if (!*b || !(*b)->next)
		return ;
	rotate_rev_op(b);
	if (print == 0)
		ft_printf("rrb\n");
}

void	rotate_rev_r(t_data **a, t_data **b, int print)
{
	if (!(*a) || !((*a)->next) || !(*b) || !((*b)->next))
		return ;
	rotate_rev_op(a);
	rotate_rev_op(b);
	if (print == 0)
		ft_printf("rrr\n");
}
