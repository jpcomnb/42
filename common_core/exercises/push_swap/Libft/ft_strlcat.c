/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:23:56 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/15 21:54:02 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length_dst;
	size_t	length_src;
	size_t	i;

	length_dst = ft_strlen(dst);
	length_src = ft_strlen(src);
	i = 0;
	if (size <= length_dst)
	{
		length_src += size;
		return (length_src);
	}
	else
		length_src += length_dst;
	size -= length_dst;
	while (src[i] && size > 1)
	{
		dst[length_dst++] = src[i++];
		size--;
	}
	dst[length_dst] = '\0';
	return (length_src);
}

/*int main(void)
{
	char	dst[] = "do not cat me, ";
	char	src[] = "cmon cuh.";
	size_t	size = 6;

	printf("%zd %s", ft_strlcat(dst, src, size), dst);
}*/
