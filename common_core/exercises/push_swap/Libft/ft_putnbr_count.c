/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:02:33 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/31 21:15:12 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_write(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr_count(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		count++;
		count += ft_putnbr_count(nb / 10);
		ft_write(nb % 10 + '0');
	}
	else
	{
		count++;
		ft_write(nb + '0');
	}
	return (count);
}

/*int main(void)
{
    int number;

    number = -147483648;
	printf("%d\n", number);
    printf("\n%d\n", ft_putnbr_count(number));
}*/
