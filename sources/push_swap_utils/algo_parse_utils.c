/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_parse_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:25:27 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/25 19:08:53 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*create_new_stack(int content)
{
	t_data	*new;

	new = malloc(sizeof (t_data));
	if (!new)
		ft_errors();
	new->value = content;
	new->next = NULL;
	return (new);
}

void	free_str(char **lst)
{
	char	*nbr;

	if (!lst)
		return ;
	while (*lst)
	{
		nbr = *lst;
		lst++;
		free(nbr);
	}
	*lst = NULL;
}

void	ft_lstadd_back_ps(t_data **stack, t_data *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(find_last_node(*stack))->next = stack_new;
}
