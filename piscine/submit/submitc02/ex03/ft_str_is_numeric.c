/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:23:09 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/05 19:59:05 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	string[] = "123";
	int	n;

	n = ft_str_is_numeric(string);
	printf("if n = 1 the string only has digits or ");
	printf("is empty.\nif n = 0 the string has some other type of ");
	printf("character.\nn=%d", n);	
}*/

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n])
	{
		if (str[n] >= 48 && str[n] <= 57)
		{
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
