/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands_reverse_rotate.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:00:55 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/16 20:19:49 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void ft_reverse_rotate(t_list **list)
{
	t_list *temp;

	temp = list_remove_back(list);
	list_add_front(list, temp);
}

void ft_reverse_rotate_a(t_list **list)
{
	ft_reverse_rotate(list);
	write(1, "rra\n", 4);	
}

void ft_reverse_rotate_b(t_list **list)
{
	ft_reverse_rotate(list);
	write(1, "rrb\n", 4);	
}

void ft_reverse_rotate_ab(t_list **list_a, t_list **list_b)
{
	ft_reverse_rotate(list_a);
	ft_reverse_rotate(list_b);
	write(1, "rrr\n", 4);
}
