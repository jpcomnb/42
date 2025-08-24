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

typedef struct	list_s
{
	int		num;
	int		index;
	int		cost;
	bool	above_median;
	bool	cheapest;

	struct list_s	*next;
	struct list_s	*prev;
	struct list_s	*target_node;
}	list_t;

list_t list_remove_front(list_t **lst);
list_t list_remove_back(list_t **lst);
void list_add_front(list_t **lst, list_t *node);
void list_add_back(list_t *lst, list_t *node);
list_t *ft_lstlast(list_t *lst);

#endif
