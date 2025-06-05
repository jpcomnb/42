/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:00:07 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/11 19:05:56 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	unsigned char string[50] = "Hello, world!";
	size_t n;
	
	n = 4;
	ft_bzero(string, n);
	printf("este string ja era:%s\n", string);
	printf("este char ja e: %c", string[7]);
}*/
