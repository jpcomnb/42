/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:40:21 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/23 19:11:58 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;

	i = 0;
	if (size <= 0 || !dst || !src)
		return (ft_strlen((const char *)src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((const char *)src));
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
