/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:02:15 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/02 21:25:05 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	print_format(char specifier, va_list ap, int count)
{
	if (specifier == 'c')
	{
		ft_putchar(va_arg(ap, int));
		count++;
	}
	else if (specifier == 's')
		count += ft_putstr_count(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_putaddress_count(va_arg(ap, void *));
	else if (specifier == 'd')
		count += ft_putnbr_count(va_arg(ap, int));
	else if (specifier == 'i')
		count += ft_putnbr_count(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_putnbr_unsigned_count(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_putnbrb_count(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (specifier == 'X')
		count += ft_putnbrb_count(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (specifier == '%')
	{
		ft_putchar('%');
		count++;
	}
	return (count);
}

int	ft_printf(const char *string, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, string);
	count = 0;
	while (*string != '\0')
	{
		if (*string == '%')
			count += print_format(*(++string), ap, 0);
		else
			count += write(1, string, 1);
		++string;
	}
	va_end(ap);
	return (count);
}

/*int	main(void)
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
	d = 56;


	printf("printf c: %c\n", c);
	ft_printf("ft_printf c: %c\n", c);
	printf("printf s: %s\n", s);
	ft_printf("ft_printf s: %s\n", s);
	printf("printf p: %p \n", p);
	ft_printf("ft_printf p: %p\n", p);
	printf("printf d: %d\n", d);
	ft_printf("ft_printf d: %d\n", d);
	printf("printf i: %i\n", i);
	ft_printf("ft_printf i: %i\n", i);
	printf("printf u: %u\n", u);
	ft_printf("ft_printf u: %u\n", u);
	printf("printf x: %x\n", x);
	ft_printf("ft_printf x: %x\n", x);
	printf("printf X: %X\n", X);
	ft_printf("ft_printf X: %X\n", X);
	printf("printf %%: %%\n");
	ft_printf("ft_printf %%: %%\n");
}*/
