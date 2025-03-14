/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:33:09 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/13 20:21:25 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}

/*int	main(void)
{
	int index;

	index = 12;
	printf("%i", ft_fibonacci(index));
}*/
