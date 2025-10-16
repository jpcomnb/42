/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:56:56 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/27 17:54:16 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int	main(void)
{
	size_t	nmemb;
	size_t	size;
	char	*ptr;

	nmemb = 12;
	size = 8;
	ptr = (char *)ft_calloc(nmemb, size);
	while (size > 0)
		ptr[--size] = 'd';
	printf("%s", ptr);
	free(ptr);
	return (0);
}*/
