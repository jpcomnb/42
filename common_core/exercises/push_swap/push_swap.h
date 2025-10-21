/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:05:59 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/19 00:11:10 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>

typedef struct	s_list
{
	int		num;
	int		index;
	int		cost;
	bool	over_median;
	bool	cheapest;

	struct s_list	*next;
	struct s_list	*prev;
	struct s_list	*target_node;
}	t_list;

//commands
void ft_push_a(t_list **list_a, t_list **list_b);
void ft_push_b(t_list **list_b, t_list **list_a);
void ft_reverse_rotate_a(t_list **list);
void ft_reverse_rotate_b(t_list **list);
void ft_reverse_rotate_ab(t_list **list_a, t_list **list_b);
void ft_rotate_a(t_list **list);
void ft_rotate_b(t_list **list);
void ft_rotate_ab(t_list **list_a, t_list **list_b);
void ft_swap_a(t_list **list);
void ft_swap_b(t_list **list);
void ft_swap_ab(t_list **list_a, t_list **list_b);
//command utils
t_list *list_remove_front(t_list **lst);
t_list *list_remove_back(t_list **lst);
void list_add_front(t_list **lst, t_list *node);
void list_add_back(t_list **lst, t_list *node);
//errors
int	*ft_check_string(char *string, bool *error);
void	ft_free_list(t_list **list);
void	ft_free_error(t_list *list);
void	ft_error_nfree();
//main
bool  check_duplicate(t_list *list_a);
void	push_swap(t_list *stack_a, t_list *stack_b);
bool	ft_initialize_stack(char **strings, t_list *list_a);
void	ft_sort_small(t_list **lst);
//utils
void	a_to_b(t_list **stack_a, t_list **stack_b);
void	b_to_a(t_list **stack_a, t_list **stack_b);
void	complete_list_a(t_list *stack_a, t_list *stack_b);
void	set_cheapest(t_list *stack);
void	set_index(t_list *list);
void	complete_list_b(t_list *stack_a, t_list *stack_b);
t_list	*find_cheapest(t_list *stack);
long	ft_atol(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isdigit(int c);
t_list	*ft_lst_highest(t_list *stack);
t_list	*ft_lst_smallest(t_list *stack);
int		ft_lstsize(t_list *lst);
int		ft_ltoi(long num);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	min_to_top(t_list **stack_a);
void	prep_push(t_list **stack, t_list *top, char name_stack);
bool	check_order(t_list *stack);
bool	ft_check_char(char *string);
size_t	ft_strlen(const char *c);
t_list	*ft_lstfirst(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
#endif
