/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:13:11 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/23 22:25:54 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void	*))
{
	t_list	*current;
	t_list	*content;

	if (lst)
	{
		current = lst;
		content = lst->content;
		del(content);
		free(current);
	}
}
