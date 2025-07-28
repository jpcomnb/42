/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:48:07 by jopedro4          #+#    #+#             */
/*   Updated: 2025/07/27 23:17:44 by jopedro4         ###   ########.fr       */
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
	while (sort_a == false && empty_b == false)
	{	
		if (check_order(list_t stack_a) == true)
		{
			sort_a = true;
		}
	}
}

int main(int argc, const char  **argv)
{
	int		i;
	list_t	*list;
	char	**chars;
	bool	check_c;

	i = 0;
	if (argc == 1 || argc == 2 || !argv[1][0])
		return (0);
	if (argc == 2)
	{
		check_cha r= ft_check_char(argv[1]);
		if (check_char == false)
			chars = ft_split(argv[1], ' ');
		else
			return (write(1, "Error", 5));
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
	}
	push_swap(list);
	free(;
	return (0);
}
