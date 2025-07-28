/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:30:00 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/23 21:57:07 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(list_t *lst)
{
	int		i;
	list_t	*current;

	i = 0;
	current = lst;
	if (current)
	{
		while (current)
		{
			current = current->next;
			i++;
		}
	}
	return (i);
}
