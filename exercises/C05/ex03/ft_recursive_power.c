/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:13:57 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/13 19:31:30 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (1);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 5;
	printf("%i", ft_recursive_power(nb, power));
}*/
