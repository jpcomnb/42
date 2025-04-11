/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:49:38 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/04 15:01:08 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_result;
	int	temp_remainder;

	temp_result = *a / *b;
	temp_remainder = *a % *b;
	*a = temp_result;
	*b = temp_remainder;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("The result of this division is %d\n", a);
	printf("The remainder of the division is %d", b);
}*/
