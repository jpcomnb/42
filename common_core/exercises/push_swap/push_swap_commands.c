/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_commands.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:33:00 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/15 22:28:05 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

list_t	*lst_swap(list_t **lst_a)
{
	list_t	*temp;
	int		temp_nbr;
	int		temp_nbr2;

	if (!lst_a || !(lst_a->next))
		return ;
	temp = lst_a;
	temp_nbr = lst_a-> data;
	temp = temp->next;
	temp_nbr2 = temp->data;
	temp->data = temp_nbr;
	temp = temp->prev;
	temp->data = temp_nbr2;
	return(temp);
}


list_t	*push_a(list_t *lst_a, list_t *lst_b)
{
	
}
