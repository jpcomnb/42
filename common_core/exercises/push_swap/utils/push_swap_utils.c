/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:45:30 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/21 19:45:12 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

t_list	*ft_lstfirst(t_list *lst)
{
	t_list	*current;

	if (!lst)
        return (NULL);
	current = lst;
	while (current->prev != NULL)
		current = current->prev;
	return (current);
}

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

bool	ft_check_char(char *string)
{
	bool 	check;
	int		i;
	int		b;

	check = false;
	i = 0;
	if (string[i])
	{
		b = ft_strlen(string);
		while (i < b)
		{	
			if ((string[i] <= '0' && string[i] >= '9') \
				&& (!(string[i] >= 9 && string[i] <= 13) \
				|| !(string[i] == 27)))
			{
				check = true;
			}
			i++;
		}
	}
	return (check);
}

bool	check_order(t_list *stack)
{
	bool	check;

	check = false;
	if (!stack)
		return (check);
	while (stack->next != NULL)
	{
		if (stack->num > stack->next->num)
			return (false);
		stack = stack->next;
	}
	return (true);
}
