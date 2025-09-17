/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_stacks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:33:38 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/13 22:49:32 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initialize_stack(char **strings, list_t list_a)
{
	int		i;
	int		l;
	int		num;
	char	**chars;

	i = 1;
	l = 0;
	num = 0;
	if (!strings)
		return ;
	if (strings[3])
		ft_many_init(char **strings, list_t &list_a);
	else
	{
		chars = ft_split(strings[2]);
		l++;
	}
}

static bool	ft_many_init(char **strings, list_t list_a)
{
	long 	l;
	int		i;
	bool	error;
	
	i = 1;
	error = false;
	while (strings[i])
	{
		if (check_char(strings[i]))
		{
			ft_error_nfree();
			error = true;
			return ;
		}
		l = ft_atol(strings[i]);
		if ( l > INT_MAX && l > INT_MIN)
		{
			ft_error_nfree();
			error = true;
			return ;
		}
		if (!error && l)
		{
			ft_list_add_num((int)l, list_t &list_a);
			if (!list_a)
				return (null);
		}
		i++;
	}
}
/*	while (strings[i])
	{
		if (check_char(strings[i]))
			ft_free_error(list_a);
		l = ft_atol(strings[i]);
		if (l > INT_MAX || l < INT_MIN)
			ft_free_error(list_a);
		if (check_duplicate((int)l, *list_a))
			ft_free_error(list_a);
		ft_add_list(list_a, (int)l);
		i++;
	}*/

static void	ft_list_add_num(int n, list_t *list_a)
{
	list_t stack;

	stack = ft_calloc(1, sizeof(list_t));
	if (!stack)
		return ;
	if (n && stack)
	{
		stack->num = n;
		
	}
}
/*first if when each number is its own 
