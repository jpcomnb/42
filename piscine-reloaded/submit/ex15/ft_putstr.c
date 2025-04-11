/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:22:42 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/05 15:08:02 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		ft_putchar(str[length]);
		length++;
	}
}

/*int	main(void)
{
	ft_putstr("Hello World!");
}*/
//string is for letters
