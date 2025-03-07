/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:36:47 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/03/05 17:26:26 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*a;

	a = ft_algo_parse(ac, av);
	if (!a || ft_error_checkdup(a))
	{
		free_stack(&a);
		ft_errors();
	}
	if (!is_sorted(a))
		sort_stacks(&a);
	free_stack(&a);
	return (0);
}
