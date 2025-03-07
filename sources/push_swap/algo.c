/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:23:11 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/03/05 17:49:01 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sign_only_arg(char *arg)
{
	return ((arg[0] == '+' || arg[0] == '-') && arg[1] == '\0');
}

static int	check_isolated_signs(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (is_sign_only_arg(av[i]))
			return (1);
		i++;
	}
	return (0);
}

t_data	*ft_algo_first_parse(char **av)
{
	t_data	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(av[1], 32);
	while (tmp[i])
	{
		j = ft_atol(tmp[i]);
		ft_lstadd_back_ps(&a, create_new_stack(j));
		i++;
	}
	free_str(tmp);
	free(tmp);
	return (a);
}

t_data	*ft_algo_parse(int ac, char **av)
{
	t_data	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (ac < 2)
		exit(1);
	if (check_isolated_signs(ac, av))
	{
		ft_errors();
		free_stack(&a);
	}
	if (ac == 2)
		a = ft_algo_first_parse(av);
	else
	{
		while (i < ac)
		{
			j = ft_atol(av[i]);
			ft_lstadd_back_ps(&a, create_new_stack(j));
			i++;
		}
	}
	return (a);
}
