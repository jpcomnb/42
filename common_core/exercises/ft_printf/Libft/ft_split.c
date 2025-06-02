/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:56:00 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/20 19:10:08 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_size(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static size_t	ft_end_of_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_free_array(char **s2)
{
	int	pos;

	pos = 0;
	while (s2[pos])
	{
		free(s2[pos]);
		pos++;
	}
	free(s2);
}

static void	ft_initializer(int *a, size_t *b)
{
	*a = 0;
	*b = 0;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**s2;
	size_t	word_length;
	size_t	pos;

	if (!s)
		return (NULL);
	ft_initializer(&i, &pos);
	s2 = (char **)ft_calloc(ft_count_size(s, c) + 1, sizeof(char *));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			word_length = ft_end_of_word(s + i, c);
			s2[pos] = ft_substr(s, i, word_length);
			if (s2[pos++] == NULL)
				return (ft_free_array(s2), NULL);
			i += word_length;
		}
	}
	return (s2);
}

/*int	main(void)
{
	char	s[] = "     one   two   three   four ";
	char	c = ' ';
	char	**d;
	size_t	i;

	i = 0;
	d = ft_split(s, c);
	while (d[i])
	{
		printf("%s\n", d[i]);
		i++;
	}
	ft_free_array (d);
}*/
