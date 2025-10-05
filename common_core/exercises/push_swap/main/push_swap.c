/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:48:07 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/28 20:08:58 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	push_swap(list_t *stack_a, list_t *stack_b)
{
	bool	sort_a;
	bool	empty_b;
	list_t	stack_b;
	int		size_a;

	sort_a = false;
	empty_b = true;
	if (check_order(list_t stack_a) == true)
	{
		sort_a = true;
		return ;
	}
	while (sort_a == false && empty_b == false)
	{
		while (size_a-- >  3 && !check_order(stack_a))
		{
			complete_list_a(*stack_a, *stack_b);
			a_to_b(stack_a, stackb);
		}
		ft_sort_small(stack_a);
		while (*stack_b)
		{
			complete_list_b();
			b_to_a();
		}
		set_index(*stack_a);
		min_is_top(stack_a, stack_b);
	}
}

int main(int argc, const char  **argv)
{
	list_t 	list_a;
	list_t 	list_b;
	char 	**strings;
	bool	error;

	list_a = NULL;
	list_b = NULL;
	if (argc == 1 || argc == 2 && !argv[1][0])
		return (0);
	error = ft_initialize_stack(argv, &list_a);
	if (!check_sort(list_a) && !error)
	{
		if (ft_lstsize(list_a) == 2)
			ft_swap_a(&list_a);
		else if (ft_lst_size(list_a) == 3)
			ft_sort_small(&list_a);
		else
			push_swap(&list_a, &list_b);
	}
	ft_free_list(&list_a);
	return (0);
}
