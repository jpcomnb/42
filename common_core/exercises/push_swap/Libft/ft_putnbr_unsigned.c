/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 00:04:58 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/30 21:26:46 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	if (n <= 9)
	{
		n += '0';
		write(1, &n, 1);
		return ;
	}
	if (n > 9)
	{
		ft_putnbr_unsigned(n / 10);
		n %= 10;
		n += '0';
		write(1, &n, 1);
	}
}

/*int main(void)
{
	unsigned int i;

	i = 123456789;
	ft_putnbr_unsigned(i);
}*/
