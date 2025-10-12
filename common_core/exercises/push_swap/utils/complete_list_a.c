/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complete_list_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:56:49 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/05 19:48:16 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(list_t *list)
{
	int	i;
	int	median;

	i = 0;
	if (!list)
		return ;
	median = ft_lstsize(list) / 2;
	while (list)
	{
		list->index = i;
		if (i <= median)
			list->over_median = true;
		else
			list->over_median = false;
		list = list->next;
		i++;
	}
	
}

static void	set_target_a(list_t *stack_a, list_t *stack_b)
{
	list_t	current_b;
	list_t	target_node;
	long	best_match_index;

	while (stack_a)
	{
		best_match_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->num < stack_a->num && current_b->num > best_match_index)
			{
				best_match_index = current_b->num;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match_index == LONG_MIN)
			stack_a->target_node = ft_lst_highest(b);
		else
			stack_a->target_node = target_node;
		stack_a = stack_a->next;
	}
}

static void	set_cost__a(list_t *stack_a, list_t *stack_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(stack_a);
	size_b = ft_lstsize(stack_b);
	while (stack_a)
	{
		stack_a->cost = a->index;
		if (!(stack_a->over_median))
			stack_a->cost = size_a - (stack_a->index);
		if (stack_a->target_node->over_median)
			stack_a->push_cost += a->target_node->index;
		else
			stack_a->push_cost += size_b - (stack_a->target_node->index);
		stack_a = stack_a->next;
	}
}

void	set_cheapest(list_t *stack)
{
	long	cheapest_num;
	list_t	*cheapest_node;

	if (!stack)
		return ;
	cheapest_num = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cheapest_value)
		{
			cheapest_num = stack->push_cost;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
	
}

void	complete_list_a(list_t *stack_a, list_t *stack_b)
{
	set_index(a);
	set_index(b);
	set_target_a(a, b);
	set_cost_a(a, b);
	set_cheapest(a);
}
