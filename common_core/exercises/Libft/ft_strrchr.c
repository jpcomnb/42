/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:42:09 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/12 18:49:17 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	size_t	t;	

	i = 0;
	t = ft_strlen(s);
	while (i <= ft_strlen(s))
	{
		if (s[t] == (char)c)
			return ((char *)&s[t]);
		i++;
		t--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char s[] = "qweqrt";
	int	c;
	char *a;

	c = 'q';
	a = ft_strrchr(s, c);
	printf("the string is: %s\nthe strrchr string is: %s", s, a);
}*/
