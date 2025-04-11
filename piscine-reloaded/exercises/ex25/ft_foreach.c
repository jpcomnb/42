/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 15:23:22 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/06 21:22:46 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_write(nbr % 10 + '0');
	}
	else
	ft_write(nbr + '0');
}

int	main(void)
{
	int	length;

	length = 3;

	int	tab[length];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	ft_foreach(tab, length, ft_putnbr);
}*/
