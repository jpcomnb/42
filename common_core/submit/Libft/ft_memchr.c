/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:57:58 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/14 19:19:41 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return (&((unsigned char *)s)[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	unsigned char	s[] = "hello muchacho";
	int	c;
	size_t n;

	c = ' ';
	n = '7';
	printf("found %s in string %s", (char *)ft_memchr(s, c, n), s);
}*/
