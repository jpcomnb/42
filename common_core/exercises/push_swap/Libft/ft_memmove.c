/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:43:19 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/23 19:06:40 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((!dest && !src))
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
	int i=100;
	char	string1[i] = "lorem ipsum dolor sit amet";

	ft_memmove(string1 +1, "consectetuer", 5);
	printf("%s", string1);
}*/
