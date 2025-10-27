/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complete_list_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:56:49 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/18 22:15:11 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_index(t_list *list)
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

static void	set_target_a(t_list *stack_a, t_list *stack_b)
{
	t_list	*current_b;
	t_list	*target_node;
	long	best_match;

	while (stack_a)
	{
		best_match = LONG_MIN;
		current_b = stack_b;
		while (current_b)
		{
			if (current_b->num < stack_a->num && current_b->num > best_match)
			{
				best_match = current_b->num;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match == LONG_MIN)
			stack_a->target_node = ft_lst_highest(stack_b);
		else
			stack_a->target_node = target_node;
		stack_a = stack_a->next;
	}
}

static void	set_cost_a(t_list *stack_a, t_list *stack_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(stack_a);
	size_b = ft_lstsize(stack_b);
	while (stack_a)
	{
		stack_a->cost = stack_a->index;
		if (!(stack_a->over_median))
			stack_a->cost = size_a - (stack_a->index);
		if (stack_a->target_node->over_median)
			stack_a->cost += stack_a->target_node->index;
		else
			stack_a->cost += size_b - (stack_a->target_node->index);
		stack_a = stack_a->next;
	}
}

void	set_cheapest(t_list *stack)
{
	long	cheapest_num;
	t_list	*cheapest_node;
	t_list	*temp;

	if (!stack)
		return ;
	temp = stack;
	while (temp)
	{
		temp->cheapest = false;
		temp= temp->next;
	}
	cheapest_num = LONG_MAX;
	cheapest_node = NULL;
	while (stack)
	{
		if (stack->cost < cheapest_num)
		{
			cheapest_num = stack->cost;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}

void	complete_list_a(t_list *stack_a, t_list *stack_b)
{
	set_index(stack_a);
	set_index(stack_b);
	set_target_a(stack_a, stack_b);
	set_cost_a(stack_a, stack_b);
	set_cheapest(stack_a);
}
