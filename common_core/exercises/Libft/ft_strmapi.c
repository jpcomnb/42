/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:21:19 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/19 19:51:53 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static char	ft_increase_case(unsigned int i, char c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	int		i;

	i = 0;
	c = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!c)
		return (NULL);
	while (i < ft_strlen(s))
	{
		c[i] = f(i, s[i]);
		i++;
	}
	return (c);
}

/*static char	ft_increase_case(unsigned int i, char c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		c -= i;
	return (c);
}

int	main(void)
{
	char 		*c;
	char const 	s[] = "string";

	c = ft_strmapi(s, ft_increase_case);
	printf("%s", c);
	free (c);
}*/
