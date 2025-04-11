/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:43:19 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/11 22:47:13 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAX_BUFFER 100

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((!dest && !src) || n < 0)
	{
		return (dest);
	}
	if (dest > src)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}

/*int	main(void)
{
	char	string1[MAX_BUFFER] = "lorem ipsum dolor sit amet";

	ft_memmove(string1 +1, "consectetuer", 5);
	printf("%s", string1);
}*/
