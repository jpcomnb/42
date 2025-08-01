/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 23:19:17 by jopedro4          #+#    #+#             */
/*   Updated: 2025/07/28 23:27:33 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_small2(list_t **lst)
{
	if(lst->num < lst->next->num && lst->next->num > lst->next->next->num \
		&& lst->num > lst->next->next->num)
	{
		
	}	
}

void	ft_sort_small(list_t **lst)
{
	lst	temp;
	lst	temp2;
	if (ft_lstsize(lst) <= 3)
	{
		if (lst->num < lst->next->num && lst->next->num > \
			 lst->next->next->num && lst->num < lst->next->next->num)
		{
			temp = list_remove_back(lst);
			list_add_front(lst, temp);
			write(1, "rra\n", 4);
			temp = list_remove_front(lst);
			temp2 = list_remove_front(lst)
			list_add_front(lst, temp2);
			list_add_front(lst, temp);
			write(1, "sa\n", 3);
		}
		ft_sort_small2(lst);
		ft_sort_small3(lst);
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
