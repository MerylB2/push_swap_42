/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:23:11 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/03/15 23:15:59 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	is_sign_only_arg(char *arg)
// {
// 	return ((arg[0] == '+' || arg[0] == '-') && arg[1] == '\0');
// }

// static int	check_isolated_signs(int ac, char **av)
// {
// 	int	i;

// 	i = 1;
// 	while (i < ac)
// 	{
// 		if (is_sign_only_arg(av[i]))
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

t_data	*ft_algo_first_parse(char *arg)
{
	t_data	*a;
	char	**nums;
	int		i;
	long	nb;

	a = NULL;
	nums = ft_split_ps(arg, ' ');
	if (!nums)
		return (NULL);
	i = 0;
	while(nums[i])
	{
		nb = ft_atol(&arg[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			return (free_stack(&a), free_split_ps(nums), NULL);
		if (!a)
			a = create_new_stack((int)nb);
		else
			ft_lstadd_back_ps(&a, create_new_stack((int)nb));
		i++;
	}
	free_split_ps(nums);
	return (a);
}

t_data	*ft_algo_parse(int ac, char **av)
{
	t_data	*a;
	int		i;
	long	nb;

	i = 1;
	a = NULL;
	while (i < ac)
	{
		nb = ft_atol(av[i]);
		if (nb > INT_MAX || nb < INT_MIN)
		{
			free_stack(&a);
			return (NULL);
		}
		if (!a) 
			a = create_new_stack((int)nb);
		else
			ft_lstadd_back_ps(&a, create_new_stack((int)nb));
		i++;
	}
	return (a);
}

t_data	*parse_args(int ac, char **av)
{
	if (ac == 2)
		return (ft_algo_first_parse(av[1]));
	return (ft_algo_parse(ac, av));
}