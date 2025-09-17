/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands_utils.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:33:00 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/17 23:05:39 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

list_t list_remove_front(list_t **lst)
{
	list_t *node;

	if (!lst)
		return ;
	node->num = (*lst)->num;
	node->next = (*lst)->next;
	node->prev = (*lst)->prev;
	(*lst)->next->prev = NULL;
	free(lst);
	return (*node);
}

list_t list_remove_back(list_t **lst)
{
	if (lst)
	{
		list_t	node;
		ft_lstlast(lst);
		node->num = lst->num;
		node->next = lst->next;
		node->prev = lst->prev;
		free(lst);
	}
	return (node);
}

void list_add_front(list_t **lst, list_t *node)
{
	if (lst)
	{
		node->next = *lst;
		*lst = node;
	}
}

void list_add_back(list_t *lst, list_t *node)
{
	list_t	*back;

	if (lst)
	{
		if (*lst)
		{
			back = ft_lstlast(*lst);
			back->next = node;
		}
		else
			*lst = node;
	}	
}
/*
int	main(void)
{
	list_t	*lst;
	list_t	*node;
	int	i;

	i = 0;
	lst = ft_calloc(6, sizeof(list_t));
	while (i <= 5)
	{
		lst->num = i;
		lst = lst->next;
		i++;
	}
	while (i >= 0)
	{
		lst = lst->prev;
		i--;
	}
	node = list_remove_front(lst);
	printf("%i", node);
}*/
