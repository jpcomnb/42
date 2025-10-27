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
	t_list *first_node;

	if (!lst || !*lst)
		return (NULL);
	first_node = *lst;
	node = ft_lstnew(&first_node->num);
	if (!node)
		return (NULL);
	*lst = first_node->next;
	if (*lst)
		(*lst)->prev = NULL;
	free(first_node);
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_list *list_remove_back(t_list **lst)
{
	t_list	*node;
	t_list	*end_node;
	
	if (!lst || !*lst)
		return (NULL);
	end_node = ft_lstlast(*lst);
	node = ft_lstnew(&end_node->num);
	if (!node)
		return (NULL);
	if (end_node->prev)
		end_node->prev->next=NULL;
	else
		*lst = NULL;
	free(end_node);
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void list_add_front(t_list **lst, t_list *node)
{
	if (!lst || !node)
		return ;
	node->next = *lst;
	node->prev = NULL;
	if (*lst)
		(*lst)->prev = node;
	*lst = node;
}

void list_add_back(t_list **lst, t_list *node)
{
	t_list	*back;

	if (!lst || !node)
		return ;
	if (*lst)
	{
		
		back = ft_lstlast(*lst);
		back->next = node;
		node->prev = back;
	}
	else
	{
			*lst = node;
			node->prev = NULL;
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
