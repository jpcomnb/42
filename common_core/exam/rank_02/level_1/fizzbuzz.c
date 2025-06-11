/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:11:49 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/10 20:28:51 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putnbr(int i)
{
	if (i > 9)
	{
		ft_putnbr(i / 10);
		i %= 10;
	}
	i += '0';
	write(1, &i, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5)) == 0)
			write(1, "fizzbuzz", 8);
		else if ((i % 3) == 0)
			write(1, "fizz", 4);
		else if ((i % 5) == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 2);
		i++;
	}
}
