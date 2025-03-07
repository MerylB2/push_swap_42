
###### Push_swap fonctions #######

# algorithme

## ft_algo_sub_process
// Cette fonction fait travailler et trie les piles
// dans le cas où elles sont passées entre guillemets. Dans ce scénario, cette fonction prend la
// chaîne de caractères et divise les nombres afin de créer des nombres entiers séparés avec ft_split

## ft_algo_process
// Cette fonction fait trois choses.
// 1. elle vérifie que le nombre d'entrées est inférieur à 2.
// 2. elle vérifie si le nombre d'entrées est égal à 2.
// Si c'est le cas, cela signifie qu'il s'agit d'une chaîne de caractères entre guillemets. 
// et appelle la fonction. <ft_algo_sub_process>
// 3. Elle vérifie si le nombre d'entrées est supérieur à 2.
// Si c'est le cas, elle liste les arguments.

# create_new_stack
// Creates new stack node with given number.

## errors_checks

# ft_error_checkdup
// This function checks the stack for duplicate numbers.
# free_stack
// This function frees the stack.
# ft_errors
//fonction which an error message is being printed out.

## push_swap args_check

# ft_isalpha
//function that checks whether the character is alphanumeric
# alpha_check
//Arguments are sent to perform an ASCII check of alphanumeric values.
# check_args
//This function checks whether arguments include alphanumeric characters or not

## push_swap parse_args

# free_str
// This function frees the string of integer values enclosed in quotation marks.
# first_parse_args
// Function that parses the arguments of the quoted string and sends them to 
// the list_of_args function to add them to the list.
// With ft_split, we separate numbers from spaces.
# ft_parse_args
// Cette fonction fait trois choses:
// 1. elle vérifie si le nombre d'entrées est inférieur à 2.
// 2. elle vérifie si le nombre d'entrées est égal à 2.
Si c'est le cas, cela signifie que la chaîne est entre guillemets.
// 3. il vérifie si le nombre d'entrées est supérieur à 2.
Si c'est le cas, il énumère les arguments.

##### push_swap ultis fonctions

## errors_check_utils

# is_sign
//vérifier si le caractère est négatif
# is_digit
//Vérifier si le caractère est un chiffre
# is_space
//vérifie si le caractère est un caractère d'espacement
# ft_check_error
//fonction permettant de vérifier si les arguments donnés sont valides

## ps_parse_utils

# ft_lstadd_back_ps
// Fonction permettant d'ajouter un nouveau nœud à la pile par l'arrière.
# list_of_args
// Si les arguments sont valides, nous commençons à les ajouter un par un dans la pile avec la boucle while. 
// ft_atoi prend le nombre et le transforme en valeur entière. 
// valeur entière dans laquelle nous pouvons effectuer des opérations mathématiques.
// Avec la fonction <create_new_stack>, nous créons un nouveau noeud pour l'argument courant sans le lier à la liste. 
// Nous effectuons l'étape de liaison dans l'appel <ft_lstadd_back_ps>.

## sort_stack_utils

# move_a_to_b
// Cette fonction calcule et décide quelle rotation
// est la meilleure à utiliser pour trier la pile.
// bien sûr, après la rotation, il reste toujours une opération
// de push à effectuer, que j'ai intégrée au code.
// La fonction est utilisée lors de l'operation push de A vers B.
# move_b_to_a
// Cette fonction calcule et décide quelle rotation
// est la meilleure à utiliser pour trier la pile.
// bien sûr, après la rotation, il reste toujours une opération
// de push à effectuer, que j'ai intégrée au code.
// La fonction est utilisée lors de l'operation push de B vers A.
# ft_rot_rrarb
// Cette fonction fait tourner la pile_a dans le sens inverse,
// la pile_b dans la direction opposée à la pile_a, selon la quantité requise.
# ft_rot_rarrb
// Cette fonction fait pivoter la pile_b dans le sens inverse,
// la pile_a dans la direction opposée de la pile_a selon la quantité requise.
# ft_rot_rarb
// Cette fonction fait tourner la pile_a et la pile_b dans la même direction selon la quantité requise.
# ft_rot_rrr
// Cette fonction fait pivoter la pile_a et la pile_b dans le sens inverse selon la quantité requise.

## stack_helpers

# ft_atol
// pareil que la fomction ft_atoi
## stack_utils

# is_sorted
// Cette fonction vérifie si la pile est triée.
# get_stack_len

# find_last_node
// This function returns the last element of the stack.
# ft_lstsize_ps
// This function returns the size of the stack.
# find_place_a
// Cette fonction trouve la place correcte du numéro dans la pile_a.
// En d'autres termes, elle vérifie quel numéro d'index value_push obtiendra après avoir été poussé dans la pile_a.
# find_place_b
// Cette fonction trouve la place correcte du numéro dans la pile_b.
// En d'autres termes, elle vérifie quel numéro d'index value_push obtiendra après avoir été poussé dans la pile_b.
# find_min_nb
// This function finds and returns the smallest number in the given stack.
# find_max_nb
// This function finds and returns the biggest number in the given stack.

###### Push_Swap Operations 

## calcul_rot_ab

# calcul_rarb_b
// Cette fonction calcule combien de fois nous devons faire tourner les piles ensemble.
// Car au bout d'un certain nombre de rotations, nous
// ne procéderons qu'à une seule rotation de la pile.
# calcul_rrr_b
// cette fonction fait la meme chode que la precedante, sauf qu'ici nous avons 
une rotation inverse, plutôt qu'un numéro d'index,
// nous vérifions le numéro d'index inversé qui est 
// calculé par lstsize_ps - find_index.
# calcul_rrarb_b
// Là encore, cette fonction effectue des calculs similaires pour le cas rra+rb.
# calcul_rarrb_b
// Là encore, cette fonction effectue des calculs similaires pour le cas ra+rrb.

## calcul_rot_ba

# calcul_rarb_a
// Cette fonction calcule la quantité de rotation nécessaire pour le cas ra+rb.
# calcul_rrr_a
// Cette fonction calcule la quantité de rotation nécessaire pour le cas rra+rrb.
# calcul_rarrb_a
// Cette fonction calcule la quantité de rotation nécessaire pour le cas ra+rrb.
# calcul_rrarb_a
// Cette fonction calcule la quantité de rotation nécessaire pour le cas rra+rb.

## push operations

# push_a
# push_b

## swap operations

# swap_a
# swap_b

## rotate operations

# rotate_a
# rotate_b
# rotate_r (ab)

## reverse rotate operations

# rotate_rev_a
# rotate_rev_b
# rotate_rev_r (ab)

## sort_big

# sort_b_while_3
// This function sort and push stacks until 3 members left behind.
# sort_stack_b
// Cette fonction pousse un par un tous les éléments dans la pile_a vers la pile_b, jusqu'à 
ce qu'il ne reste plus que trois éléments laissés dans la pile_a. 
// En poussant, elle s'assure que la pile_b est triée. 
// Lorsqu'il ne reste plus que trois éléments, elle appelle la fonction <sort_three> pour trier les
éléments restants dans la pile_a.
# sort_stack_a
// Cette fonction repousse les éléments de la pile_b vers la pile_a jusqu'à ce que la pile_b 
soit vide.


## sort_stack

# sort_stacks
// Cette fonction trie la pile_a s'il y a 
// plus de 2 éléments dans la pile_a.
// Et enfin, elle effectue le tri final dans la pile_a après que
// toutes les valeurs poussées dans stack_b, sont
// triées et repoussées dans la pile_a. Car, même si la pile_a est
// triée à la fin, le nombre minimum doit se trouver 
// au sommet de la pile_a. Il suffit donc d'apporter
// le plus petit nombre de la pile_a au sommet.

## sort_three

# find_index
// Cette fonction vérifie l'indice d'un nombre dans la pile.
# sort_three
// Cette fonction trie la pile s'il n'y a que trois éléments dans la pile.



##### BONUS : Checker

Le programme ``checker`` lit une liste aléatoire d'entiers à partir de stdin, les stocke, et vérifie s'ils sont triés.
s'ils sont triés.

## How does it work?

Le programme checker exécute l'algorithme de tri. L'algorithme de tri imprime une série d'opérations en suivant un caractère de nouvelle ligne.

Le programme checker lit les sorties grâce à la fonction get_next_line. Après avoir lu chaque opération, une par une, il applique les mêmes opérations aux piles. A la fin, il vérifie si les piles sont dans l'état désiré. Cela signifie qu'il vérifie si la pile est triée.