/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:12:24 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/03/15 22:51:29 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
		ft_errors();
	return (res * sign);
}

int	ft_error_checkdup(t_data *a)
{
	t_data	*temp;

	if (!a)
		return (0);
	while (a)
	{
		temp = a->next;
		while (temp)
		{
			if (a->value == temp->value)
				return (1);
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}

void	free_stack(t_data **stack)
{
	t_data	*temp;

	if (!stack)
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		(*stack)->value = 0;
		free(*stack);
		*stack = temp;
	}
	*stack = NULL;
}

void	ft_errors(void)
{
	ft_printf("Error\n");
	exit(1);
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}
