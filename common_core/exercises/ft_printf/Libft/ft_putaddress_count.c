/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 20:53:55 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/31 22:23:18 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putaddress_count(void *p)
{
	unsigned long	addr;
	int				count;

	count = 0;
	if (!p)
	{
		count += 5;
		write(1, "(nil)", 5);
		return (count);
	}
	addr = (unsigned long)p;
	write(1, "0x", 2);
	count += 2;
	count += ft_putnbrlb_count(addr, "0123456789abcdef");
	return (count);
}

/*int main(void)
{
	void *p;

	p = (void *)999999;
	printf(" %p %p ", p);
	printf(" %p %p ", ft_putaddress_count(p));
}*/
