/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_to_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:40:32 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/21 18:31:41 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	min_to_top(t_list **stack_a)
{
	while ((*stack_a)->num != ft_lst_smallest(*stack_a)->num)
	{
		if (ft_lst_smallest((*stack_a))->over_median)
			ft_rotate_a(stack_a);
		else
			ft_reverse_rotate_a(stack_a);
	}
}
