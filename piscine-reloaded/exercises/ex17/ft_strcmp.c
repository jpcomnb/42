/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:31:32 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/11 19:48:55 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

/*int	main(void)
{
	char	string1[] = "ABC";
	char	string2[] = "ABC";

	printf("the difference is %i", ft_strcmp(string1, string2));
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] != '\0' && s2[n] != '\0' && s1[n] == s2[n])
	{
		n++;
	}
	return (s1[n] - s2[n]);
}
