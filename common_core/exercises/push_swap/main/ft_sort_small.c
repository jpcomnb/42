/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 23:19:17 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/18 19:21:26 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_sort_small1(t_list **lst)
{
	t_list *temp;
	t_list *temp2;

	temp = list_remove_back(lst);
	list_add_front(lst, temp);
	write(1, "rra\n", 4);
	temp = list_remove_front(lst);
	temp2 = list_remove_front(lst);
	list_add_front(lst, temp2);
	list_add_front(lst, temp);
	write(1, "sa\n", 3);
}
static void ft_sort_small2(t_list **lst)
{
	t_list *temp;

	temp = list_remove_back(lst);
	list_add_front(lst, temp);
	write(1, "rra\n", 4);
}


void	ft_sort_small(t_list **lst)
{
	if (ft_lstsize(*lst) <= 3 && !check_order(*lst))
	{
		if ((*lst)->num < (*lst)->next->num && (*lst)->next->num > \
			 (*lst)->next->next->num && (*lst)->num < (*lst)->next->next->num)
			ft_sort_small1(lst);
		if ((*lst)->num < (*lst)->next->num && \
		 (*lst)->next->num > (*lst)->next->next->num \
		&& (*lst)->num > (*lst)->next->next->num)
			ft_sort_small2(lst);
		if ((*lst)->num > (*lst)->next->num && \
			(*lst)->num < (*lst)->next->next->num && \
			(*lst)->next->num > (*lst)->next->next->num)
			ft_swap_a(lst);
		else
		{
			ft_rotate_a(lst);
			if (!check_order(*lst))
				ft_swap_a(lst);
		}
	}
}

/*
	1: 1 2 3 - nothing
	2: 1 3 2 - rra, sa
	3: 2 3 1 - rra
	4: 2 1 3 - sa
	5: 3 1 2 - ra
	6: 3 2 1 - ra, sa
*/
