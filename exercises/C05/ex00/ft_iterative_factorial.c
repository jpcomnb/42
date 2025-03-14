/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:54:31 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/13 18:58:44 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 1;
	if (nb < 0)
		return (0);
	while (nb >= i)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int nb;

	nb = 5;
	printf("%i", ft_iterative_factorial(nb));
}*/
