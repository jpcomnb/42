/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 20:21:54 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/05 20:41:16 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_to_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest;

	cheapest = find_cheapest(*stack_a); 
	if (cheapest_node->above_median && cheapest_node->target_node->above_median)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest->above_median) && !(cheapest->target_node->above_median))
		rev_rotate_both(stack_a, stack_b, cheapest);
	prep_for_push(stack_a, cheapest, 'a');
	prep_for_push(stack_b, cheapest->target_node, 'b');
	ft_push_b(stack_b, stack_a);
}

