/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:42:27 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/12 15:32:56 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(t_data *a, int nb)
{
	int	i;

	i = 0;
	while (a->value != nb)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

void	sort_three(t_data **a)
{
	if (find_min_nb(*a) == (*a)->value)
	{
		rotate_rev_a(a, 0);
		swap_a(a, 0);
	}
	else if (find_max_nb(*a) == (*a)->value)
	{
		rotate_a(a, 0);
		if (!is_sorted(*a))
			swap_a(a, 0);
	}
	else
	{
		if (find_index(*a, find_max_nb(*a)) == 1)
			rotate_rev_a(a, 0);
		else
			swap_a(a, 0);
	}
}
