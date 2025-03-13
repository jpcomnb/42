/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:27:13 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/04 15:00:02 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

/*int	main(void)
{
	int	*a;
	int	*b;
	int	x;
	int	y;

	x = 12;
	y = 42;
	a = &x;
	b = &y;
	printf("the value of a is %d\n", *a);
	printf("the value of b is %d\n", *b);
	ft_swap(a, b);
	printf("the value of a is %d\n", *a);
	printf("the value of b is %d", *b);
}*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
