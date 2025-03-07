/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_rot_ba.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:38:10 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/15 17:36:24 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calcul_rarb_a(t_data *a, t_data *b, int c)
{
	int	i;

	i = find_place_a(a, c);
	if (i < find_index(b, c))
		i = find_index(b, c);
	return (i);
}

int	calcul_rrr_a(t_data *a, t_data *b, int c)
{
	int	i;

	i = 0;
	if (find_place_a(a, c))
		i = ft_lstsize_ps(a) - find_place_a(a, c);
	if ((i < (ft_lstsize_ps(b) - find_index(b, c))) && find_index(b, c))
		i = ft_lstsize_ps(b) - find_index(b, c);
	return (i);
}

int	calcul_rarrb_a(t_data *a, t_data *b, int c)
{
	int	i;

	i = 0;
	if (find_index(b, c))
		i = ft_lstsize_ps(b) - find_index(b, c);
	i = find_place_a(a, c) + i;
	return (i);
}

int	calcul_rrarb_a(t_data *a, t_data *b, int c)
{
	int	i;

	i = 0;
	if (find_place_a(a, c))
		i = ft_lstsize_ps(a) - find_place_a(a, c);
	i = find_index(b, c) + i;
	return (i);
}
