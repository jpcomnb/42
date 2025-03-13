/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:58:41 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/12 18:57:38 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

/*int	main(void)
{
	char	string1[] = "ABC";
	char	string2[] = "AB";
	unsigned int	n;

	n = 2;
	printf("the difference is %i", ft_strncmp(string1, string2, n));
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
