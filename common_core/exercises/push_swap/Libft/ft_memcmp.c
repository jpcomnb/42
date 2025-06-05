/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:38:39 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/14 20:40:07 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (temp1[i] != temp2[i])
			break ;
		n--;
		if (n == 0)
			break ;
		i++;
	}
	return (temp1[i] - temp2[i]);
}

/*int	main(void)
{
	unsigned char s1[] = "teste";
	unsigned char s2[] = "test";

	int	f;
	size_t n;

	n = 10;
	f = ft_memcmp(s1, s2, n);
	printf("%d",f );
}*/
