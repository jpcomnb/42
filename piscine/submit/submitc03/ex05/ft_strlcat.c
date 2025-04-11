/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:12:57 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/11 16:29:28 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_dest;
	unsigned int	s_src;
	unsigned int	i;

	s_dest = 0;
	s_src = 0;
	i = 0;
	while (dest[s_dest] != '\0')
		s_dest++;
	while (src[s_src] != '\0')
		s_src++;
	if (size <= s_dest)
		s_src += size;
	else
		s_src += s_dest;
	while (src[i] != '\0' && (s_dest + 1) < size)
	{
		dest[s_dest] = src[i];
		i++;
		s_dest++;
	}
	dest[s_dest] = '\0';
	return (s_src);
}

/*#include <stdio.h>

int	main(void)
{
	unsigned int	size;
	char	dest[] = "123";
	char	src[] = "4562";

	size = 9;
	printf("%u\n%s",ft_strlcat(dest, src, size), dest);
}*/
