/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:48:07 by jopedro4          #+#    #+#             */
/*   Updated: 2025/07/05 17:53:38 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(char *string)
{
	
	write(1, '\n', 1);
}

int main(int argc, const char  **argv)
{
	int	i;

	i = 2;
	if (argc == 1 || argc == 2 || !argv[1][0])
		return (0);
	while (argv[i])
	{
		argv = ft_split(argv[1], ' ')
		i++;
	}
	return (0);
}
