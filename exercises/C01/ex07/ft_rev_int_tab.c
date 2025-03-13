/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 23:27:09 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/04 15:06:53 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		//printf("%d ", str[i++]);
		//i++;
		write(1, &str[i++], 1);
	}
}

void	print_array(int *array, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		char	v = array[i] + '0';
		write(1, &v, 8);
		i++;
	}
		//printf("%d ", array[i++]); 
}

int	main(void)
{
	int	size_array;
	int	array[] = {1, 4, 5, 2, 6, 5};
	size_array = 6;
	put_str("The original array is:");
	print_array(array, 6);
	put_str("\n");
	ft_rev_int_tab(array, size_array);
	put_str("The reversed array is:");
	print_array(array, 6);
}*/
//A maria joao tem um cerebro gigante
