/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:02:40 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/18 16:47:16 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static bool	check_duplicate_util(t_list *list_a, int size, int *array)
{
	int		times;
	int		start;

	start = 0;
	times = size;
	while (times-- > 0)
	{
		start = 0;
		list_a = ft_lstfirst(list_a);
		while (start < size)
		{
			if (array[start] == list_a->num)
					return (true);
			list_a = list_a->next;
		}
		start++;
	}
	return (false);
}

bool	check_duplicate(t_list *list_a)
{
	int	size;
	int	start;
	int	*array;
	bool error;
	
	start = 0;
	size = ft_lstsize(list_a);
	array = ft_calloc(size, sizeof(int));
	if (!array)
		return (NULL);
	while (start < size)
	{
		array[start] = list_a->num;
		start++;
		list_a = list_a->next;
	}
	error = check_duplicate_util(list_a, size, array);
	return (error);
}
