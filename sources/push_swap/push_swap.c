/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:36:47 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/03/15 23:16:11 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_valid_input(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		if (av[i][0] == '\0')
			return (false);
		if (is_sign(av[i][0]))
			j++;
		if (av[i][j] == '\0')
			return (false);
		while(av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				return (false);
			j++;
		}
		ft_atol(av[i]);
		i++;
	}
	return (true);
}

static void release(t_data *a)
{
	while (a->next)
	{
		a = a->next;
		free_stack(&(a->next));
	}
}

int	main(int ac, char **av)
{
	t_data	*a;

	if (ac < 2)
	exit(1);
	if (!is_valid_input(ac, av))
	{
		ft_errors();
		exit(1);
	}
	a = parse_args(ac, av);
	if (!a || ft_error_checkdup(a))
	{
		free_stack(&a);
		ft_errors();
		exit(1);
	}
	if (!is_sorted(a))
		sort_stacks(&a);
	release(a);
	free_stack(&a);
	return (0);
}
