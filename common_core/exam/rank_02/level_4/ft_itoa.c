/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 22:48:46 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/12 00:05:42 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_length(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr= nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long	num;
	char	*string;
	int		i;
	int		l;

	
	num = nbr;
	l = ft_count_length(nbr);
	string = (char *)malloc((l+1) * (sizeof(char)));
	if (!string)
		return (NULL);
	string[l] = '\0';
	if (num < 0)
	{
		string[0]= '-';
		num = -num;
	}
	i= l -1;
	while (num > 9)
	{
		string[i]= num % 10 + '0';
		num = num / 10;
		i--;
	}
	string[i] = num + '0';
	return (string);
}

int	main(void)
{
	int i;
	char *b;

	i = 123;
	b = ft_itoa(i);
	printf("%s", b);
}
