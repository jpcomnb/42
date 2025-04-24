/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:30:31 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/11 22:54:27 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	if (!dest && !src)
		return (NULL);
	temp1 = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	while (i < n)
	{
		temp1[i] = temp2[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	size_t	MAX_CHAR = 100;	
	char	first_str[MAX_CHAR] = "HELLO";
	char	second_str[MAX_CHAR] = "GOODBYE";

	printf("first_str:%s\n", first_str);
	printf("second_str:%s\n", second_str);	
	ft_memcpy(first_str, second_str, 9);
	printf("first_str:%s\n", first_str);
	printf("second_str:%s\n", second_str);
}*/
