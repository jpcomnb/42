/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:22:42 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/04 15:02:03 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	write(1, str, length);
}

/*int	main(void)
{
	ft_putstr("Hello World!");
	write(1, "\n", 1);
}*/
/*string is for letters*/
