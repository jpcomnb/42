/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:48:07 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/18 21:18:43 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	push_swap(t_list *stack_a, t_list *stack_b)
{
	bool	sort_a;
	bool	empty_b;
	int		size_a;

	sort_a = false;
	empty_b = true;
	if (check_order(stack_a) == true)
	{
		sort_a = true;
		return ;
	}
	size_a = ft_lstsize(stack_a);
	while (sort_a == false && empty_b == false)
	{
		while (size_a-- >  3 && !check_order(stack_a))
		{
			complete_list_a(stack_a, stack_b);
			a_to_b(&stack_a, &stack_b);
		}
		ft_sort_small(&stack_a);
		while (stack_b != NULL)
		{
			complete_list_b(stack_a, stack_b);
			b_to_a(&stack_a, &stack_b);
		}
		set_index(stack_a);
		min_to_top(&stack_a);
	}
}

int main(int argc, char  **argv)
{
	t_list 	*list_a;
	t_list 	*list_b;
	bool	error;

	list_a = NULL;
	list_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	error = ft_initialize_stack(argv, list_a);
	if (!check_order(list_a) && !error)
	{
		if (ft_lstsize(list_a) == 2)
			ft_swap_a(&list_a);
		else if (ft_lstsize(list_a) == 3)
			ft_sort_small(&list_a);
		else
			push_swap(list_a, list_b);
	}
	ft_free_list(&list_a);
	return (0);
}
