/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 23:59:08 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/12 16:40:10 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int	main(void)
{
	const char s[] = "the cake is a lie !\0I'm hidden lol\r\n";
	int	i;
	char *f;
	i = ' ';
	f = ft_strchr(s, i);
	printf("the %s has %s", s, f);
}*/
