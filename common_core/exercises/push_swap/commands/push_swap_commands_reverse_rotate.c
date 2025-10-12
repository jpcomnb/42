/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands_reverse_rotate.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:00:55 by jopedro4          #+#    #+#             */
/*   Updated: 2025/08/23 16:22:21 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void ft_reverse_rotate(list_t **list)
{
	list_t temp;

	temp = ft_remove_back(list);
	ft_add_front(list, temp);
}

void ft_reverse_rotate_a(list_t **list)
{
	ft_reverse_rotate(list);
	write(1, "rra\n", 4);	
}

void ft_reverse_rotate_b(list_t **list)
{
	ft_reverse_rotate(list);
	write(1, "rrb\n", 4);	
}

void ft_reverse_rotate_ab(list_t **list_a, list_t **list_b)
{
	ft_reverse_rotate(list_a);
	ft_reverse_rotate(list_b);
	write(1, "rrr\n", 4);
}
