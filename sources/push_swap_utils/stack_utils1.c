/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:42:35 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/24 17:16:21 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize_ps(t_data *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	find_place_a(t_data *a, int value_push)
{
	int		i;
	t_data	*tmp;

	i = 1;
	if (value_push < a->value && value_push > find_last_node(a)->value)
		i = 0;
	else if (value_push > find_max_nb(a) || value_push < find_min_nb(a))
		i = find_index(a, find_min_nb(a));
	else
	{
		tmp = a->next;
		while (a->value > value_push || tmp->value < value_push)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}

int	find_place_b(t_data *b, int value_push)
{
	int		i;
	t_data	*tmp;

	i = 1;
	if (value_push > b->value && value_push < find_last_node(b)->value)
		i = 0;
	else if (value_push > find_max_nb(b) || value_push < find_min_nb(b))
		i = find_index(b, find_max_nb(b));
	else
	{
		tmp = b->next;
		while (b->value < value_push || tmp->value > value_push)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}
