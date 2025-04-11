/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:33:39 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/05 21:12:00 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	string[] = "worD12";

	printf("the original string is:%s\n", string);
	printf("the new string is: %s", ft_strupcase(string));
}*/
