/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ga <jdias-ga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:18:52 by jdias-ga          #+#    #+#             */
/*   Updated: 2025/02/22 16:24:45 by jdias-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush(int x, int y)
{
	int	l;
	int	a;

	a = 0;
	while (a < y)
	{
		l = 0;
		while (l < x)
		{
			if ((l == 0 && a == 0) || (l == 0 && a == y -1))
				ft_putchar('A');
			else if ((l == x -1 && a == 0) || (l == x -1 && a == y -1))
				ft_putchar('C');
			else if (l == 0 || l == x -1)
				ft_putchar('B');
			else if (a == 0 || a == y -1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		a++;
	}
}
