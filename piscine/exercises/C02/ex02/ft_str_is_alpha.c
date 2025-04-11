/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:05:48 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/05 19:57:43 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n])
	{
		if ((str[n] >= 97 && str[n] <= 122) || (str[n] >= 65 && str[n] <= 90))
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
	
	n = ft_str_is_alpha(string);
	printf("if n = 1 the string only has alphabetical characters or ");
	printf("is empty.\nif n = 0 the string has some other type of ");
	printf("character.\nn=%d", n);
}*/
