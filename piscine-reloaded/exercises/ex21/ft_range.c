/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:14:08 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/05 15:55:51 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	array = malloc(sizeof(int) * size);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 12;
	max = 2000;
	i = 0;
	range = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
