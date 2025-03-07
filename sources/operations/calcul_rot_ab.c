/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_rot_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:38:10 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/15 13:49:15 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calcul_rarb_b(t_data *a, t_data *b, int c)
{
	int	i;

	i = find_place_b(b, c);
	if (i < find_index(a, c))
		i = find_index(a, c);
	return (i);
}

int	calcul_rrr_b(t_data *a, t_data *b, int c)
{
	int	i;

	i = 0;
	if (find_place_b(b, c))
		i = ft_lstsize_ps(b) - find_place_b(b, c);
	if ((i < (ft_lstsize_ps(a) - find_index(a, c))) && find_index(a, c))
		i = ft_lstsize_ps(a) - find_index(a, c);
	return (i);
}

int	calcul_rrarb_b(t_data *a, t_data *b, int c)
{
	int	i;

	i = 0;
	if (find_index(a, c))
		i = ft_lstsize_ps(a) - find_index(a, c);
	i = find_place_b(b, c) + i;
	return (i);
}

int	calcul_rarrb_b(t_data *a, t_data *b, int c)
{
	int	i;

	i = 0;
	if (find_place_b(b, c))
		i = ft_lstsize_ps(b) - find_place_b(b, c);
	i = find_index(a, c) + i;
	return (i);
}
