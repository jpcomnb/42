/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands_utils.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:33:00 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/16 20:25:41 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list *list_remove_front(t_list **lst)
{
	t_list *node;

	node = NULL;
	if (!lst)
		return (NULL) ;
	node->num = (*lst)->num;
	node->next = (*lst)->next;
	node->prev = (*lst)->prev;
	(*lst)->next->prev = NULL;
	free(lst);
	return (node);
}

t_list *list_remove_back(t_list **lst)
{
	t_list	*node;
	t_list	*end_node;
	
	node = NULL;
	if (lst)
	{
		end_node = ft_lstlast(*lst);
		node->num = end_node->num;
		node->next = end_node->next;
		node->prev = end_node->prev;
		free(lst);
	}
	return (node);
}

void list_add_front(t_list **lst, t_list *node)
{
	if (lst)
	{
		node->next = *lst;
		*lst = node;
	}
}

void list_add_back(t_list **lst, t_list *node)
{
	t_list	*back;

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
	t_list	*lst;
	t_list	*node;
	int	i;

	i = 0;
	lst = ft_calloc(6, sizeof(t_list));
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
