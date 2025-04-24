/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:28:23 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/12 18:44:54 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] && s2[i] && n > 0)
	{
		if (((unsigned char)s1[i] != (unsigned char)s2[i]))
			break ;
		n--;
		if (n == 0)
			break ;
		i++;
	}
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}

/*int	main(void)
{
	const char s1[] = "abcdefgh";
	const char s2[] = "abcdwxyz";
	int		i;
	size_t	n;

	n = 4;
	i = ft_strncmp(s1, s2, n);
	printf("the difference between s1 and s2 is: %i", i);
}*/
