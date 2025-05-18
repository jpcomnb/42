/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:53:33 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/18 17:42:46 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *c);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			i;
	unsigned char	*temp;
	size_t			n;

	n = size * nmemb;
	i = 0;
	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
	return (ptr);
}

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!(char)c)
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_l;
	size_t	s2_l;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	ptr = ft_calloc((s1_l + s2_l) + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcat(ptr, s1, s1_l + 1);
	ft_strlcat(ptr, s2, ft_strlen(ptr) + s2_l + 1);
	return (ptr);
}

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
