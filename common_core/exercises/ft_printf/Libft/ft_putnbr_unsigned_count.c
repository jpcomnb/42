/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_count.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 00:04:58 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/30 21:11:57 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_unsigned_count(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
	{
		count++;
		n += '0';
		write(1, &n, 1);
		return (count);
	}
	if (n > 9)
	{
		count++;
		count += ft_putnbr_unsigned_count(n / 10);
		n %= 10;
		n += '0';
		write(1, &n, 1);
	}
	return (count);
}

/*int	main(void)
{
	unsigned int	c;

	c = 12345678;
	printf("\n%d\n", ft_putnbr_unsigned_count(c));
}*/
