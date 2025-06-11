/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 00:30:47 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/11 20:32:35 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}


int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}
