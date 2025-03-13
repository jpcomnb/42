/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:22:44 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/06 15:53:00 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n])
	{
		if (str[n] >= 32 && str[n] <= 127)
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

/*int	main(void)
{
	char	string[] = "Hello ";
	int	n;
	
	n = ft_str_is_printable(string);
	printf("if n = 1 the string only has printable characters or ");
	printf("is empty.\nif n = 0 the string has some other type of ");
	printf("character.\nn=%d", n);
}*/
