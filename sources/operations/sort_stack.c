/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:15:22 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/03/07 01:45:51 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stacks(t_data **a)
{
	t_data	*b;
	int		i;

	b = NULL;
	if (ft_lstsize_ps(*a) == 2)
		swap_a(a, 0);
	else
	{
		b = sort_stack_b(a);
		a = sort_stack_a(a, &b);
		i = find_index(*a, find_min_nb(*a));
		if (i < ft_lstsize_ps(*a) - i)
		{
			while ((*a)->value != find_min_nb(*a))
				rotate_a(a, 0);
		}
		else
		{
			while ((*a)->value != find_min_nb(*a))
				rotate_rev_a(a, 0);
		}
	}
}
