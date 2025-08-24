/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands_push.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:40:11 by jopedro4          #+#    #+#             */
/*   Updated: 2025/08/23 15:25:08 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push(list_t list_dest, list_t list_src)
{
	list_t *temp;

	if(list_dest && list_src)
	{
		temp = list_remove_front(list_src);
		list_add_front(list_dest, temp);
	}
}

void ft_push_a(list_t list_a, list_t list_b)
{
	ft_push(list_a, list_b);
	write(1, "pa\n", 3);
}

void ft_push_b(list_t list_b, list_t list_a)
{
	ft_push(list_b, list_a);
	write(1, "pb\n", 3);
}
