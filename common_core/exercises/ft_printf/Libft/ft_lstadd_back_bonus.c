/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:36:54 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/23 21:59:47 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **lst, t_list *new)
{
	t_list	*back;

	if (lst)
	{
		if (*lst)
		{
			back = ft_lstlast(*lst);
			back->next = new;
		}
		else
			*lst = new;
	}
}
