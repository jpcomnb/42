/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:41:27 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/16 21:40:29 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd);
static int	ft_string(char *string);
static void	*ft_memmove(void *dest, const void *src, size_t n);

static int	ft_string(char *string)
{
	int	i;
	int	size;
	char	*buf;

	size = 1;
	i = 0;
	buf = NULL;
	if (!buf)
		return (NULL);
	while (string[i] && string[i] != '\n' && i < BUFFER_SIZE)
		i++;
	while (size)
	{
		size = read(fd, string, i);
		ft_memmove(buf, string, i);
	}
	return (buf);
}

char	*get_next_line(int fd)
{
	static char buf[BUFFER_SIZE + 1];
	int	buffer;

	if (fd <= -1 || BUFFER_SIZE <= 0 || read(fd, buf, 0) < 0)
		return (NULL);
	ft_string(&buf);
	return(buf);
}

static void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest)
	{
		
	}
	if (dest >src)
	{
		
	}
}

int	main(int argc, char *argv[])
{
	char	*lines;

	int fd = open(argv[1], O_RDONLY);
	lines = get_next_line(fd);
	printf("%s\n", lines);
}
