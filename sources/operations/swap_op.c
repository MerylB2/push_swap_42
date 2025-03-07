/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:03:42 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/12 15:19:36 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_op(t_data **head)
{
	t_data	*tmp;

	if (!(*head) || !((*head)->next))
		return ;
	tmp = *head;
	*head = (*head)->next;
	tmp->next = (*head)->next;
	(*head)->next = tmp;
}

void	swap_a(t_data **a, int print)
{
	swap_op(a);
	if (print == 0)
		ft_printf("sa\n");
}

void	swap_b(t_data **b, int print)
{
	swap_op(b);
	if (print == 0)
		ft_printf("sb\n");
}

void	swap_s(t_data **a, t_data **b, int print)
{
	swap_op(a);
	swap_op(b);
	if (print == 0)
		ft_printf("ss\n");
}
