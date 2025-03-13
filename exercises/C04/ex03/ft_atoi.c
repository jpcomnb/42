/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:54:54 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/12 23:07:02 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	number;

	number = 0;
	i = 0;
	negative = 1;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
		str[i] == '\f' || str[i] == '\r' || str[i] == ' ') && str[i] != '\0')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * negative);
}

/*int	main(void)
{
	char string[] = "   ---+--+1234ab567";
	printf("%i", ft_atoi(string));
}*/
