/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:48:07 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/02 16:31:57 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	push_swap(list_t *stack_a)
{
	bool	sort_a;
	bool	empty_b;
	list_t	stack_b;

	sort_a = false;
	empty_b = true;
	if (check_order(list_t stack_a) == true)
	{
		sort_a = true;
		return ;
	}
	while (sort_a == false && empty_b == false)
	{
		while (len_a-- >  3 && !check_sort(*stack_a))
		{
			treat_list_a()
		}
	}
}

int main(int argc, const char  **argv)
{
	list_t 	list_a;
	list_t 	list_b;
	char 	**strings;

	list_a = NULL;
	list_b = NULL;
	if (argc == 1 || argc == 2 && !argv[1][0])
		return (0);
	else if (argc == 2)
		strings = ft_split(argv + 1, " ");
	ft_initialize_stack(strings, &list_a);
	if (!check_sort(list_a))
	{
		if (ft_lstsize(list_a) == 2)
			ft_swap_a(&list_a);
		if (ft_lst_size(list_a) == 3)
			ft_sort_small(&list_a);
	}
	else
		push_swap(&list_a, &list_b);
	ft_free_list(&list_a);
	return (0);
}


	/*	check_c = ft_check_char(argv[1]);
		if (check_char == false)
			chars = ft_split(argv[1], ' ');
		else
			return (write(1, "Error\n", 6));
		while (chars[i])
		{
			list->num = ft_atoi(chars[i]);
			i++;
			list = list->next;
		}
		while (list->prev != NULL)
		{
			list = list->prev;
		}
	}*/
