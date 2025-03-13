/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:35:04 by jopedro4          #+#    #+#             */
/*   Updated: 2025/02/26 19:25:53 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <stdlib.h>

void	ft_while(char a, char b, char c, char d);

void	ft_print_comb2 (void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	
	a = '0';
	b = '0';
	c = '0';
	d = '0';
	ft_while(a, b, c, d);
}

void	ft_write_comb2(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, ", ", 1);
}

void	ft_while(char a, char b, char c, char d)
{
	while (a < 9 && b < 8)
	{
		while (b <= 9)
		{
			while (c <=9)
 			{
				d = c+1;
				while (d <= 9)
				{
				ft_write_comb2 (*a, *b, *c, *d);
				d++;
				}
			c++;
			}
		b++;
		}
	a++;
	}
}

int main (void)
{
	ft_print_comb2 ();
	return (0);
}
