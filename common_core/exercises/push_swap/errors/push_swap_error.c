/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 20:22:50 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/07 19:09:46 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_list(list_t **list)
{
	list_t	**temp;
	list_t	**node;

	if (!list)
		return ;
	node = *list;
	while (node)
	{
		temp = node->next;
		node ->num = 0;
		free(node);
		node = temp;
	}
	*list = NULL;
}

void	ft_free_error(list_t, )
{
	free_stack(&list);
	write(1, "Error\n", 6);
}

void	ft_error_nfree()
{
	write(1, "Error\n", 6);
}
