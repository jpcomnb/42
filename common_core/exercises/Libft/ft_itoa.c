/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:14:39 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/18 22:18:43 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int	n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_negative(char *c, int *n, int *is_neg, int i)
{
	if (*n < 0)
	{
		*n *= -1;
		c[i++] = '-';
		(*is_neg)++;
	}
}

static void	ft_string(char *c, int is_neg, int count, int n)
{
	if (is_neg == 0)
	{
		while (count > 0)
		{
			c[--count] = (n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		while (count >= 1)
		{
			c[count--] = (n % 10) + '0';
			n /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*c;
	int		count;
	int		i;
	int		is_neg;

	is_neg = 0;
	i = 0;
	count = ft_count_digit(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		c = ft_calloc(count + 2, sizeof(char));
	else
		c = ft_calloc(count + 1, sizeof(char));
	if (!c)
		return (NULL);
	if (n == 0)
	{
		c[0] = '0';
		return (c);
	}
	ft_negative(c, &n, &is_neg, i);
	ft_string(c, is_neg, count, n);
	return (c);
}

/*int	main(void)
{
	int 	n;
	char	*s;

	n = -623;
	s = ft_itoa(n);
	printf("%s", s);
	free(s);
}*/
