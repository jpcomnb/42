/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:02:15 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/24 00:55:32 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_format(char specifier, va_list *ap)
{
	int count;

	count = 0;
	if (specifier == 'c')
		ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		ft_putstring(va_arg(ap, char *));
	else if (specifier == 'p')
		ft_print_adress();
	else if (specifier == 'd')
		
	else if (specifier == 'i')

	else if (specifier == 'u')

	else if (specifier == 'x')

	else if (specifier == 'X')

	else if (specifier == '%'
		ft_putchar(va_arg(ap, int));
}

int ft_printf(const char *string, ...)
{
	va_list ap;
	int		count;

	va_start(ap, string);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++string), ap;
		else
			count = write(1, string, 1);
		++string;
	}
	va_end(ap);
	return (count);
}

int	main(int argc, const char **argv)
{
	int i

	i = 69;

	ft_printf("", )
}
