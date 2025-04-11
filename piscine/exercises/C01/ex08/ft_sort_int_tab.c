/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:43:56 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/04 18:57:31 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	t;

	t = 0;
	while (t < size)
	{
		i = t + 1;
		while (i < size)
		{
			temp = 0;
			if (tab[t] > tab[i])
			{
				temp = tab[t];
				tab[t] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		t++;
	}
}
/*
int	main(void)
{
	int	array[6] = {4, 2, 7, 4, 8, 0};
	int	size_array;
	int	i;

	i = 0;
	size_array = 6;
	printf("the original array is:");
	while (i < size_array)
	{
		printf("%d", array[i]);
		i++;
	}
	ft_sort_int_tab(array, size_array);
	i = 0;
	printf("\nthe new array is:");
	while (i < size_array)
	{
		printf("%d", array[i]);
		i++;
	}
}*/
