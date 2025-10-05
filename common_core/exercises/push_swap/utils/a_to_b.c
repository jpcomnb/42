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

void	a_to_b(list_t **stack_a, list_t **stack_b)
{
	t_stack_node	*cheapest_node;

	cheapest_node = get_cheapest(*a); 
	if (cheapest_node->above_median && cheapest_node->target_node->above_median)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median) && !(cheapest_node->target_node->above_median))
		rev_rotate_both(a, b, cheapest_node);
	prep_for_push(a, cheapest_node, 'a');
	prep_for_push(b, cheapest_node->target_node, 'b');
	pb(b, a, false);
}

