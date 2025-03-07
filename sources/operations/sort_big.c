/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:35:48 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/24 17:50:48 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_b_while_3(t_data **a, t_data **b)
{
	t_data	*tmp;
	int		i;

	while (ft_lstsize_ps(*a) > 3 && !is_sorted(*a))
	{
		tmp = *a;
		i = move_a_to_b(*a, *b);
		while (i >= 0)
		{
			if (i == calcul_rarb_b(*a, *b, tmp->value))
				i = ft_rot_rarb(a, b, tmp->value, 'a');
			else if (i == calcul_rrr_b(*a, *b, tmp->value))
				i = ft_rot_rrr(a, b, tmp->value, 'a');
			else if (i == calcul_rarrb_b(*a, *b, tmp->value))
				i = ft_rot_rarrb(a, b, tmp->value, 'a');
			else if (i == calcul_rrarb_b(*a, *b, tmp->value))
				i = ft_rot_rrarb(a, b, tmp->value, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_data	*sort_stack_b(t_data **a)
{
	t_data	*b;

	b = NULL;
	if (ft_lstsize_ps(*a) > 3 && !is_sorted(*a))
		push_b(a, &b, 0);
	if (ft_lstsize_ps(*a) > 3 && !is_sorted(*a))
		push_b(a, &b, 0);
	if (ft_lstsize_ps(*a) > 3 && !is_sorted(*a))
		sort_b_while_3(a, &b);
	if (!is_sorted(*a))
		sort_three(a);
	return (b);
}

t_data	**sort_stack_a(t_data **a, t_data **b)
{
	t_data	*tmp;
	int		i;

	while (*b)
	{
		tmp = *b;
		i = move_b_to_a(*a, *b);
		while (i >= 0)
		{
			if (i == calcul_rarb_a(*a, *b, tmp->value))
				i = ft_rot_rarb(a, b, tmp->value, 'b');
			else if (i == calcul_rarrb_a(*a, *b, tmp->value))
				i = ft_rot_rarrb(a, b, tmp->value, 'b');
			else if (i == calcul_rrr_a(*a, *b, tmp->value))
				i = ft_rot_rrr(a, b, tmp->value, 'b');
			else if (i == calcul_rrarb_a(*a, *b, tmp->value))
				i = ft_rot_rrarb(a, b, tmp->value, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (a);
}
