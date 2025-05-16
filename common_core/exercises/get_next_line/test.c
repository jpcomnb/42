/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:37:03 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/16 21:40:35 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

//#define BUFFER_SIZE 42 // Define BUFFER_SIZE if not defined in get_next_line.h

static int  ft_string(char *string, int fd);
static void *ft_memmove(void *dest, const void *src, size_t n);

static int ft_string(char *string, int fd)
{
    int i = 0;
    int bytes_read;

    while (string[i] && string[i] != '\n' && i < BUFFER_SIZE)
        i++;
    
    if (string[i] == '\n')
        return (1); // Newline found

    bytes_read = read(fd, string, BUFFER_SIZE);
    if (bytes_read <= 0)
        return (bytes_read); // Return 0 for EOF or -1 for error

    string[bytes_read] = '\0'; // Null-terminate the string
    return (ft_string(string + i, fd)); // Recursive call to read more
}

char *get_next_line(int fd)
{
    static char buf[BUFFER_SIZE + 1];
    char *line;
    int bytes_read;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buf, 0) < 0)
        return (NULL);

    bytes_read = ft_string(buf, fd);
    if (bytes_read <= 0)
        return (NULL); // Return NULL if no more lines or error

    line = malloc((BUFFER_SIZE + 1) * sizeof(char)); // Allocate memory for the line
    if (!line)
        return (NULL); // Return NULL if memory allocation fails

    ft_memmove(line, buf, BUFFER_SIZE); // Move the buffer content to line
    return (line); // Return the line read
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d = dest;
    const char *s = src;

    if (d == s || n == 0)
        return (dest);
    if (d < s)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        d += n;
        s += n;
        while (n--)
            *(--d) = *(--s);
    }
    return (dest);
}

int main(int argc, char *argv[])
{
    char *lines;
    int fd;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return (1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    while ((lines = get_next_line(fd)) != NULL)
    {
        printf("%s", lines);
        free(lines); // Free the allocated memory for each line
    }

    close(fd); // Close the file descriptor
    return (0);
}

