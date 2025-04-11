/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:59:54 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/05 15:28:04 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

int	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	v;

	i = 1;
	if (argc <= 0)
		return (0);
	while (i < argc)
	{
		v = 0;
		while (argv[i][v] != '\0')
		{
			ft_putchar(argv[i][v]);
			v++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	ft_print_params(argc, argv);
	return (0);
}
