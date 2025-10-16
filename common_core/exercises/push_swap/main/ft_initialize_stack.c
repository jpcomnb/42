/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:33:38 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/26 22:12:12 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static bool	ft_many_init(char **strings, t_list *list_a);
static void	ft_list_add_num(int n, t_list *list_a);
static void	ft_list_add_num(int n, t_list *list_a);
static bool	ft_one_init(char *strings, t_list *list_a);
static int	check_duplicate(t_list list_a);

bool	ft_initialize_stack(char **strings, t_list list_a)
{
	char	**chars;
	bool	error;

	if (!strings)
		return (NULL);
	if (strings[3])
		error = ft_many_init(strings, &list_a);
	else
		error = ft_one_init(strings[2], &list_a);
	error = check_duplicate(&list_a);
	return (error);

}

static bool	ft_many_init(char **strings, t_list *list_a)
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
			return (error);
		}
		l = ft_atol(strings[i]);
		if ( l > INT_MAX && l > INT_MIN)
		{
			ft_error_nfree();
			error = true;
			return (error);
		}
		if (!error && l)
		{
			ft_list_add_num((int)l, list_t &list_a);
			if (!list_a)
				return (NULL);
		}
		i++;
	}
}

static void	ft_list_add_num(int n, t_list *list_a)
{
	t_list stack;

	stack = ft_calloc(1, sizeof(list_t));
	if (!stack)
		return ;
	if (n && stack)
		stack->num = n;
	list_add_back(&list_a, stack);
}

static bool	ft_one_init(char *strings, t_list *list_a)
{
	int	i;
	bool error;
	int	*array;
	t_list stack;

	i = 0;
	array = ft_check_string(strings, &error);
	while (strings[i])
	{
		ft_list_add_num(n, list_a);
		i++;
	}
	return (error);
}

static bool	check_duplicate(t_list list_a)
{
	int	size;
	int	start;
	int	*array;
	int	times;
	
	
	start = 0;
	i = ft_lstsize(list_a);
	array = ft_calloc(i, sizeof(int));
	while (start < i)
	{
		array[start] = list_a->num;
		start++;
		list_a = list_a->next;
	}
	start = 0;
	times = size;
	while (times--)
	{
		start = 0;
		while ()
		{
			
		}
		break ;
	}
	return (bool)
}

/*first if when each number is its own 
