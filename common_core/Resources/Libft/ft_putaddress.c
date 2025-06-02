/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:37:54 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/30 21:10:55 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putaddress(void *p)
{
	unsigned long	addr;

	if (!p)
	{
		write(1, "(nil)", 5);
		return ;
	}
	addr = (unsigned long)p;
	write(1, "0x", 2);
	ft_putnbr_base(addr, "0123456789abcdef");
}

/*int main(void)
{
	void *p;

	p = (void *)999999;
	ft_putaddress(p);
	printf("\n%p\n", p);
}*/
