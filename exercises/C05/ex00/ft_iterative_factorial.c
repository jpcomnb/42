/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:54:31 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/13 15:20:00 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int temp;
	int n;
	int to;

	i = 1;
	n = 1;
	to = nb -1;
	while (i < nb)
	{
		temp = nb * to;
		n *= temp;
		nb--;
	}
	return (n);
}

int	main(void)
{
	int nb;

	nb = 5;
	printf("%i", ft_iterative_factorial(nb));
}
