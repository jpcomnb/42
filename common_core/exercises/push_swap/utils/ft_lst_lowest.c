/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_lowest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 20:25:05 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/28 20:49:03 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
list_t	*ft_lst_smallest()
{
	long	min;
	list_t	*min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX; 
	while (stack)
	{
		if (stack->nbr < min)
		{
			min = stack->nbr;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}
