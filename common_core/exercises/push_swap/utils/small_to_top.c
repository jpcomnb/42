/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_to_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:40:32 by jopedro4          #+#    #+#             */
/*   Updated: 2025/10/12 21:04:27 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	min_on_top(list_t **stack_a)
{
	while ((*stack_a)->nbr != find_min(*stack_a)->nbr)
	{
		if (find_min(*stack_a)->above_median)
			ft_rotate_a(stack_a);
		else
			ft_reverse_rotate_a(stack_a);
	}
}
