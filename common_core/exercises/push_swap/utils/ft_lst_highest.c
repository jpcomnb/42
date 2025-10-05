/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_highest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 20:12:02 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/28 20:24:48 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

list_t	*ft_lst_highest(list_t *stack)
{
	long	max;
	list_t	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->nbr > max)
		{
			max = stack->nbr;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}
//Function that searches a list and returns the node with the biggest number

