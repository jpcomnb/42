/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:02:15 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/28 18:12:21 by jopedro4         ###   ########.fr       */
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
		ft_putstr(va_arg(ap, char *));
	else if (specifier == 'p')
		ft_put_adress(va_arg(ap, void *);
	else if (specifier == 'd')
		ft_putnbr_base(va_arg(ap, int);
	else if (specifier == 'i')
		ft_putnbr(va_arg(ap, int);
	else if (specifier == 'u')
		ft_putnbr_unsigned(va_arg(ap, unsigned int);
	else if (specifier == 'x')
		ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
	else if (specifier == 'X')
		ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	else if (specifier == '%')
		ft_putchar('%');
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
	char			c;
	char 			*s;
	void			*p;
	int				d;
	int 			i;
	unsigned int	u;
	int				x;
	int				X;

	c = 'l';
	s = "this string";
	p = (void *)13;
	i = 69;
	u = 1234567890;
	x = 42;
	X = 42;

	ft_printf("testing specifier c: %c", c);
	ft_printf("testing specifier s: %s", s);
	ft_printf("testing specifier d: %d", d);
	ft_printf("testing specifier i: %i", i);
	ft_printf("testing specifier u: %u", u);
	ft_printf("testing specifier x: %x", x);
	ft_printf("testing specifier X: %X", X);
	ft_printf("testing specifier %: %%");
}
