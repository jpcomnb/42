/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:05:59 by jopedro4          #+#    #+#             */
/*   Updated: 2025/08/23 18:17:54 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdfed.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>
# include <limits.h>

typedef struct	list_s
{
	int		num;
	int		index;
	int		cost;
	bool	over_median;
	bool	cheapest;

	struct list_s	*next;
	struct list_s	*prev;
	struct list_s	*target_node;
}	list_t;

//commands
void ft_push_a(list_t list_a, list_t list_b);
void ft_push_b(list_t list_b, list_t list_a);
void ft_reverse_rotate_a(list_t **list);
void ft_reverse_rotate_b(list_t **list);
void ft_reverse_rotate_ab(list_t **list_a, list_t **list_b);
void ft_rotate_a(list_t **list);
void ft_rotate_b(list_t **list);
void ft_rotate_ab(list_t **list_a, list_t **list_b);
void ft_swap_a(list_t **list);
void ft_swap_b(list_t **list);
void ft_swap_ab(list_t **list_a, list_t **list_b);
//command utils
list_t list_remove_front(list_t **lst);
list_t list_remove_back(list_t **lst);
void list_add_front(list_t **lst, list_t *node);
void list_add_back(list_t *lst, list_t *node);
//errors
int	*ft_check_string(char *string, bool *error);
void	ft_free_list(list_t **list);
void	ft_free_error(list_t);
void	ft_error_nfree();
//main
void	push_swap(list_t *stack_a, list_t *stack_b);
bool	ft_initialize_stack(char **strings, list_t list_a);
void	ft_sort_small(list_t **lst);
//utils
void	a_to_b(list_t **stack_a, list_t **stack_b);
#endif
