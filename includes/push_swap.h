/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:54:34 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/03/05 18:07:11 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdbool.h>
# include "operations.h"

/*
** Gestion des erreurs
*/
int		ft_error_checkdup(t_data *a);
void	free_stack(t_data **stack);
void	ft_errors(void);
/*
** Fonctions d'initialisation de la stack
*/
t_data	*create_new_stack(int content);
long	ft_atol(const char *str);

/*
** Fonctions pour l'algorithme de tri
*/
void	sort_stacks(t_data **a);
void	sort_three(t_data **a);
void	sort_b_while_3(t_data **a, t_data **b);
t_data	*sort_stack_b(t_data **a);
t_data	**sort_stack_a(t_data **a, t_data **b);

/*
** Fonctions du processus de l'algorithme principal : parsing
*/
t_data	*ft_algo_first_parse(char **av);
t_data	*ft_algo_parse(int ac, char **av);

/*
** Fonctions utilitaires
*/
int		is_sorted(t_data *stack);
t_data	*find_last_node(t_data *stack);
int		find_min_nb(t_data *stack);
int		find_max_nb(t_data *stack);
void	ft_lstadd_back_ps(t_data **stack, t_data *stack_new);
void	free_str(char **lst);

/*   */
int		move_b_to_a(t_data *a, t_data *b);
int		move_a_to_b(t_data *a, t_data *b);
int		ft_rot_rarb(t_data **a, t_data **b, int c, char s);
int		ft_rot_rrr(t_data **a, t_data **b, int c, char s);
int		ft_rot_rrarb(t_data **a, t_data **b, int c, char s);
int		ft_rot_rarrb(t_data **a, t_data **b, int c, char s);

/*    */
int		find_index(t_data *a, int nb);
int		ft_lstsize_ps(t_data *lst);
int		find_place_a(t_data *a, int value_push);
int		find_place_b(t_data *b, int value_push);

/*    */
int		calcul_rarb_a(t_data *a, t_data *b, int c);
int		calcul_rrr_a(t_data *a, t_data *b, int c);
int		calcul_rarrb_a(t_data *a, t_data *b, int c);
int		calcul_rrarb_a(t_data *a, t_data *b, int c);

/*   */
int		calcul_rarb_b(t_data *a, t_data *b, int c);
int		calcul_rrr_b(t_data *a, t_data *b, int c);
int		calcul_rarrb_b(t_data *a, t_data *b, int c);
int		calcul_rrarb_b(t_data *a, t_data *b, int c);

#endif
