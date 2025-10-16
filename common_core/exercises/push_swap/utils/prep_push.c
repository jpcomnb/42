/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:36:06 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/12 18:48:54 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	prep_push(t_list **stack, t_list *top_node, char name_stack)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ft_rotate_a(stack);
			else
				reverse_rotate_a(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				ft_rotate_b(stack);
			else
				ft_reverse_rotate_b(stack);
		}	
	}
}
