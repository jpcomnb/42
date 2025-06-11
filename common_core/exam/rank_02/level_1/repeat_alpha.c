/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 22:07:23 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/11 00:20:18 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *string)
{
	int	i;
	int	b;

	i = 0;
	while (string[i])
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			b = string[i] - 96;
			while (b)
			{
				write(1, &string[i], 1);
				b--;
			}
		}
		else if (string[i] >= 'A' && string[i] >= 'Z')
		{
			b = string[i] - 64;
			while (b)
			{
				write(1, &string[i], 1);
				b--;
			}
		}
		else
			write(1, &string[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}
