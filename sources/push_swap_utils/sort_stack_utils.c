/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:29:53 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/15 17:35:04 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rot_rrarb(t_data **a, t_data **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			rotate_rev_a(a, 0);
		while (find_place_b(*b, c) > 0)
			rotate_b(b, 0);
		push_b(a, b, 0);
	}
	else
	{
		while (find_place_a(*a, c) > 0)
			rotate_rev_a(a, 0);
		while ((*b)->value != c)
			rotate_b(b, 0);
		push_a(a, b, 0);
	}
	return (-1);
}

int	ft_rot_rarrb(t_data **a, t_data **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			rotate_a(a, 0);
		while (find_place_b(*b, c) > 0)
			rotate_rev_b(b, 0);
		push_b(a, b, 0);
	}
	else
	{
		while (find_place_a(*a, c) > 0)
			rotate_a(a, 0);
		while ((*b)->value != c)
			rotate_rev_b(b, 0);
		push_a(a, b, 0);
	}
	return (-1);
}
