/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:59:40 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/10 22:06:58 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int a;
	int	b;

	a = 19;
	b = 35;
	ft_swap(&a, &b);
	printf("a:%i\nb:%i\n", a, b);
}*/
