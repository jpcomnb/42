/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands_rotate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:27:07 by jopedro4          #+#    #+#             */
/*   Updated: 2025/08/23 15:58:20 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void ft_rotate(list_t **list)
{
	list_t	*temp;

	if (list)
	{
		temp = list_remove_front(list);
		list_add_back(list, temp);
	}
}

void ft_rotate_a(list_t **list)
{
	if (list)
	{
		ft_rotate(list);
		write(1, "ra\n", 3);
	}
}

void ft_rotate_b(list_t **list)
{
	if (list)
	{
		ft_rotate(list);
		write(1, "rb\n", 3);
	}
}

void ft_rotate_ab(list_t **list_a, list_t **list_b)
{
	if (list_a && list_b)
	{
		ft_rotate(list_a);
		ft_rotate(list_b);
		write(1, "rr\n", 3);
	}
}
