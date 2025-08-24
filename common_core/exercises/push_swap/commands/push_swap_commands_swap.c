/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:53:19 by jopedro4          #+#    #+#             */
/*   Updated: 2025/08/23 14:38:52 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(list_t **list)
{
	list_t *temp;
	list_t *temp2;

	if (list)
	{
		temp = list_remove_front(list);
		temp2 = list_remove_front(list);
		list_add_front(list, temp);
		list_add_front(list, temp2);
	}
}

void ft_swap_a(list_t **list)
{
	if (list)
	{
		ft_swap(list);
		write(1, "sa\n, 3");
	}
}

void ft_swap_b(list_t **list)
{
	if (list)
	{
		ft_swap(list);
		write(1, "sb\n, 3");
	}
}

void ft_swap_ab(list_t **list_a, list_t **list_b)
{	
	if (list_a && list_b)
	{
		ft_swap(list_a);
		ft_swap(list_b);
		write(1, "ss\n",3);
	}
}
