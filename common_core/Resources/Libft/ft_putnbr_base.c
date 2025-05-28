/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:41:21 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/28 19:47:08 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(unsigned int nbr, char *(base))
{
	unsigned int	i;
	unsigned int	b;

	b = ft_strlen(base);

	if (nbr < b)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	if (nbr > b)
	{
		ft_putnbr_base(nbr / b, base);
		nbr %= b;
		write(1, &base[nbr], 1);
	}
}

/*int	main(void)
{
	printf("%x\n", 999);
	ft_putnbr_base(999, "0123456789abcdef");
}*/
