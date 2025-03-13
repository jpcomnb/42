/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atum.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:35:04 by jopedro4          #+#    #+#             */
/*   Updated: 2025/02/26 17:50:50 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	
	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_while(a, b, c, d);
}

void    ft_while(char a, char b, char c, char d)
{
	while (a < 9 && b < 8)
	{
		if (b <= 9)
		{
			if (c <=9)
			{
				if (d <= 9)
				{
				ft_write_comb2 (a, b, c, d);
				d++;
				}
			c++;
			}
		b++;
		}
	a++;
	}
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

int main (void)
{
	ft_print_comb2 ();
	return (0);
}
