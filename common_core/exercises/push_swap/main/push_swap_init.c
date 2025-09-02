/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:20:34 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/02 16:22:20 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	ft_initialize_stack(char **strings, list_t list_a)
{
	long 	l;
	int		i;

	i = 0;
	while (strings[i])
	{
		if (check_char(strings[i]))
			ft_free_error(list_a);
		l = ft_atol(strings[i]);
		if (l > INT_MAX || l < INT_MIN)
			ft_free_error(list_a);
		if (check_duplicate((int)l, *a))
			ft_free_error(a);
		ft_add_list(list_a, (int)l);
		i++;
	}
}
