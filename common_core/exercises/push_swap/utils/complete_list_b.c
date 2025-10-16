/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complete_list_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:14:26 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/12 20:23:31 by jopedro4         ###   ########.fr       */
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
		a_current = a;
		best_match_index = LONG_MAX;
		while (current_a)
		{
			if (a_current->nbr > stack_b->nbr && a_current->nbr < best_match_index)
			{
				best_match_index = a_current->nbr;
				target_node = a_current;
			}
			a_current = current_a->next;
		}
		if (best_match_index == LONG_MAX)
			stack_b->target_node = find_min(a);
		else
			stack_b->target_node = target_node;
		stack_b = stack_b->next;
	}
}

void	complete_list_b(t_list *stack_a, t_list *stack_b)
{
	set_index(a);
	set_index(b);
	set_target_b(a, b);
}
