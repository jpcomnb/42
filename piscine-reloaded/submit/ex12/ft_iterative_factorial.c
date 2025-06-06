/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:54:31 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/05 15:39:29 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	result;

	i = 2;
	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
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

	nb = 12;
	printf("%i", ft_iterative_factorial(nb));
}*/
