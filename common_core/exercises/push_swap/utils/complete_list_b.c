/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complete_list_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:14:26 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/19 00:05:14 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


static void	set_target_b(t_list *stack_a, t_list *stack_b)
{
	t_list	*a_current;
	t_list	*target_node;
	long	best_match_index;

	while (stack_b)
	{
		a_current = stack_a;
		best_match_index = LONG_MAX;
		while (a_current)
		{
			if (a_current->num > stack_b->num && a_current->num < best_match_index)
			{
				best_match_index = a_current->num;
				target_node = a_current;
			}
			a_current = a_current->next;
		}
		if (best_match_index == LONG_MAX)
			stack_b->target_node = ft_lst_smallest(stack_a);
		else
			stack_b->target_node = target_node;
		stack_b = stack_b->next;
	}
}

void	complete_list_b(t_list *stack_a, t_list *stack_b)
{
	set_index(stack_a);
	set_index(stack_b);
	set_target_b(stack_a, stack_b);
}
