/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:46:40 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/11 22:48:05 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	i;
	int number;

	i = 2;
	if(argc == 2)
	{
		number = atoi(argv[1]);
		if (number == 1)
		{
			printf("1");
		}
		while (i <= number)
		{
			if (number % i == 0)
			{
				
				printf("%d", i);
				if (number != i)
					printf("*");
				number = number / i;
			}
			else
				i++;
		}
	}
	printf("\n");
}
