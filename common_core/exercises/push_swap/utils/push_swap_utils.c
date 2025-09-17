/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:45:30 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/17 23:05:44 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

list_t	*ft_lstlast(list_t *lst)
{
	t_list	*current;

	current = lst;
	if (!current)
		return (NULL);
	while (current->next != NULL)
		current = current->next;
	return (current);
}

list_t	*ft_lstfirst(list_t *lst)
{
	list_t	*current;

	current = lst;
	if (!current)
		return (NULL);
	while (current->prev != NULL)
		current = current->prev;
	return (current);
}

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

bool	ft_check_char(char *string)
{
	bool 	check;
	int		i;

	check = false;
	i = 0;
	if (string[i])
	{
		b = ft_strlen(string);
		while ((string[i] >= '0' && string[i] <= '9') \
			 || ((string[i] >= 9 && string[i] <= 13) || string[i] == 27))
		{
			i++;
		}
		if (i > 0)
		{
			check = true;
		}
	}
	return (check);
}

bool	check_order(list_t *stack)
{
	bool	check;

	if (!stack)
		return ;
	check = false;
	while (stack->next != NULL && stack->num <= stack->next->num)
	{	
		stack= stack-> next;
	}
	check = true;
	return (check);
}
