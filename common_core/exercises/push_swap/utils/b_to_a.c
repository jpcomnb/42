/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:27:15 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/18 21:50:38 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	b_to_a(t_list **stack_a, t_list **stack_b)
{
	prep_push(stack_a, (*stack_b)->target_node, 'a');
	ft_push_a(stack_a, stack_b); 
}
