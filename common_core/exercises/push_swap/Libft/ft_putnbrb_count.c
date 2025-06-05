/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrb_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:41:21 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/31 22:03:15 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrb_count(unsigned int nbr, char *(base))
{
	unsigned int	b;
	int				count;

	count = 0;
	b = ft_strlen(base);
	if (nbr < b)
	{
		count++;
		write(1, &base[nbr], 1);
	}
	if (nbr >= b)
	{
		count++;
		count += ft_putnbrb_count(nbr / b, base);
		nbr %= b;
		write(1, &base[nbr], 1);
	}
	return (count);
}

/*int	main(void)
{
	int	i;

	i = 0;
//	printf(" %x ", 16);
//	printf("\n");
	i = ft_putnbrb_count(16, "0123456789abcdef");
//	printf("\n%i", i);
}*/
