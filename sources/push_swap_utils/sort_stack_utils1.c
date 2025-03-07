/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_utils1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:15:22 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/24 17:24:21 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	move_b_to_a(t_data *a, t_data *b)
{
	t_data	*move;
	int		i;

	move = b;
	i = calcul_rrr_a(a, b, b->value);
	while (move)
	{
		if (i > calcul_rarb_a(a, b, move->value))
			i = calcul_rarb_a(a, b, move->value);
		if (i > calcul_rrr_a(a, b, move->value))
			i = calcul_rrr_a(a, b, move->value);
		if (i > calcul_rarrb_a(a, b, move->value))
			i = calcul_rarrb_a(a, b, move->value);
		if (i > calcul_rrarb_a(a, b, move->value))
			i = calcul_rrarb_a(a, b, move->value);
		move = move->next;
	}
	return (i);
}

int	move_a_to_b(t_data *a, t_data *b)
{
	t_data	*move;
	int		i;

	move = a;
	i = calcul_rrr_b(a, b, a->value);
	while (move)
	{
		if (i > calcul_rarb_b(a, b, move->value))
			i = calcul_rarb_b(a, b, move->value);
		if (i > calcul_rrr_b(a, b, move->value))
			i = calcul_rrr_b(a, b, move->value);
		if (i > calcul_rarrb_b(a, b, move->value))
			i = calcul_rarrb_b(a, b, move->value);
		if (i > calcul_rrarb_b(a, b, move->value))
			i = calcul_rrarb_b(a, b, move->value);
		move = move->next;
	}
	return (i);
}

int	ft_rot_rarb(t_data **a, t_data **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && find_place_b(*b, c) > 0)
			rotate_r(a, b, 0);
		while ((*a)->value != c)
			rotate_a(a, 0);
		while (find_place_b(*b, c) > 0)
			rotate_b(b, 0);
		push_b(a, b, 0);
	}
	else
	{
		while ((*b)->value != c && find_place_a(*a, c) > 0)
			rotate_r(a, b, 0);
		while ((*b)->value != c)
			rotate_b(b, 0);
		while (find_place_a(*a, c) > 0)
			rotate_a(a, 0);
		push_a(a, b, 0);
	}
	return (-1);
}

int	ft_rot_rrr(t_data **a, t_data **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && find_place_b(*b, c) > 0)
			rotate_rev_r(a, b, 0);
		while ((*a)->value != c)
			rotate_rev_a(a, 0);
		while (find_place_b(*b, c) > 0)
			rotate_rev_b(b, 0);
		push_b(a, b, 0);
	}
	else
	{
		while ((*b)->value != c && find_place_a(*a, c) > 0)
			rotate_rev_r(a, b, 0);
		while ((*b)->value != c)
			rotate_rev_b(b, 0);
		while (find_place_a(*a, c) > 0)
			rotate_rev_a(a, 0);
		push_a(a, b, 0);
	}
	return (-1);
}
