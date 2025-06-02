/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:23:27 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/16 22:14:23 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_id_trash(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	while (ft_id_trash((s1[i]), set))
	{
		start++;
		i++;
	}
	while (ft_id_trash((s1[end]), set))
		end--;
	s2 = ft_substr(s1, start, end - start + 1);
	return (s2);
}

static size_t	ft_id_trash(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char const	s1[] = "123213123321343wabofet31231313312";
	char const	set[] = "12345";
	char	*lol;

	lol = ft_strtrim(s1, set);
	printf("%s", lol);
	free(lol);
}*/
