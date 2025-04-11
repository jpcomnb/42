/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:13:17 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/06 16:13:12 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] += 32;
		}
		n++;
	}
	return (str);
}

//#include <stdio.h>

/*int	main(void)
{
	char	string[] = "worD12";

	printf("the original string is:%s\n", string);
	printf("the new string is: %s", ft_strlowcase(string));
}*/
