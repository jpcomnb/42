/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 20:21:54 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/18 21:50:25 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate_ab_p(t_list **stack_a, t_list **stack_b, t_list *cheapest)
{
	while (*stack_b != cheapest->target_node && *stack_a != cheapest)
		ft_rotate_ab(stack_a, stack_b);
	set_index(*stack_a);
	set_index(*stack_b);
}

static void	rrotate_ab_p(t_list **stack_a, t_list **stack_b, t_list *cheapest)
{
	while (*stack_b != cheapest->target_node && *stack_a != cheapest)
		ft_reverse_rotate_ab(stack_a, stack_b);
	set_index(*stack_a);
	set_index(*stack_b);
}

void	a_to_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest;

	cheapest = find_cheapest(*stack_a);
	if (cheapest->over_median && cheapest->target_node->over_median)
		rotate_ab_p(stack_a, stack_b, cheapest);
	else if (!(cheapest->over_median) && !(cheapest->target_node->over_median))
		rrotate_ab_p(stack_a, stack_b, cheapest);
	prep_push(stack_a, cheapest, 'a');
	prep_push(stack_b, cheapest->target_node, 'b');
	ft_push_b(stack_b, stack_a);
}

