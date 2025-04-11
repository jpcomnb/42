/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:40:21 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/11 22:30:00 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		f;
	
	i = 0;
	f = ft_strlen(dst);
	
	if (size == 0)
		return (ft_strlen((const char*)src));
		
	while (i < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (dst[i] != '\0')
		i++;
	if (f < size)
		dst[i] = '\0';
	return (ft_strlen((const char*)dst));
}

/*int	main(void)
{
	char	dst[] = "cd brain/aneurism ";
	const char	*src = "yolo";
	size_t	i;

	i = ft_strlcpy(dst, src, 2);
	printf("dst: %s\nreturn: %zu\n", dst, i);
	return (0);
}*/
