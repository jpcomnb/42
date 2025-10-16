/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands_swap.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:53:19 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/16 20:22:42 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void ft_swap(t_list **list)
{
	t_list *temp;
	t_list *temp2;

	if (list)
	{
		temp = list_remove_front(list);
		temp2 = list_remove_front(list);
		list_add_front(list, temp);
		list_add_front(list, temp2);
	}
}

void ft_swap_a(t_list **list)
{
	if (list)
	{
		ft_swap(list);
		write(1, "sa\n", 3);
	}
}

void ft_swap_b(t_list **list)
{
	if (list)
	{
		ft_swap(list);
		write(1, "sb\n", 3);
	}
}

void ft_swap_ab(t_list **list_a, t_list **list_b)
{	
	if (list_a && list_b)
	{
		ft_swap(list_a);
		ft_swap(list_b);
		write(1, "ss\n",3);
	}
}
