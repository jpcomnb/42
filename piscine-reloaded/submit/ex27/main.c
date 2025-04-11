/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:44:51 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/07 03:46:14 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUFFSIZE 30

void	ft_display(char *argv)
{
	int		display;
	char	buf[BUFFSIZE + 1];
	int		num_read;

	display = open(argv, O_RDONLY);
	if (display == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while (1)
	{
		num_read = read(display, buf, BUFFSIZE);
		if (num_read < 0)
		{
			write(2, "Cannot read file.\n", 18);
			break ;
		}
		if (num_read == 0)
			break ;
		buf[num_read] = '\0';
		write(1, buf, num_read);
	}
	close(display);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (argc == 2)
	{
		ft_display(argv[1]);
	}
	return (0);
}
