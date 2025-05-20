/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:41:27 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/20 20:26:00 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd);

static char	*ft_free(char *buffer, char *buffer2)
{
	char	*string;

	string = ft_strjoin(buffer, buffer2);
	free(buffer);
	if (!string)
		return (free(string), NULL);
	return (string);
}

static char	*ft_next_buffer(char *buffer)
{
	int		i;
	int		i2;
	char	*next_line;

	i = 0;
	i2 = 0;
	while (buffer[i] != '\n' && buffer[i])
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	next_line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	if (!next_line)
		return (free(buffer), NULL);
	i++;
	while (buffer[i])
		next_line[i2++] = buffer[i++];
	free(buffer);
	return (next_line);
}

static char	*ft_doline(char	*buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (ft_strchr(buffer, '\n'))
		i++;
	line = ft_calloc(i + 1, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer [i];
		i++;
	}
	if (buffer[i] && buffer [i] == '\n')
		line [i++] = '\n';
	return (line);
}

static char	*ft_read_line(int fd, char *buffer, char *temp, int byte_read)
{
	if (!buffer)
		buffer = ft_calloc(1, 1);
	if (!buffer)
		return (NULL);
	temp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!temp)
		return (free(buffer), NULL);
	byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = read(fd, temp, BUFFER_SIZE);
		if (byte_read == -1)
			return (free(temp), free(buffer), NULL);
		if (byte_read > 0)
		{
			temp[byte_read] = 0;
			buffer = ft_free(buffer, temp);
			if (!buffer)
				return (free(temp), NULL);
			if (ft_strchr(temp, '\n'))
				break ;
		}
	}
	return (free(temp), buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*string;

	if (fd <= -1 || BUFFER_SIZE <= 0)
	{
		if (buffer)
		{
			free(buffer);
			buffer = NULL;
		}
		return (NULL);
	}
	buffer = ft_read_line(fd, buffer, NULL, 1);
	if (!buffer)
		return (NULL);
	string = ft_doline(buffer);
	if (!string)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	buffer = ft_next_buffer(buffer);
	return (string);
}
/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*lines;
		int		n = atoi(argv[2]);
		int fd = open(argv[1], O_RDONLY);

		while (n--)
		{
			lines = get_next_line(fd);
			printf("%s", lines);
			free(lines);
		}
		close (fd);
	}
}*/
/*int	main(void)
{
	char	*lines;

	int fd = open("only_nl.txt", O_RDONLY);
	while ((lines = get_next_line(fd)))
	{
		printf("%s", lines);
		free(lines);
	}
	close (fd);
}*/
