/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:43:03 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/16 16:39:13 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	i;

	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	c = (char *)ft_calloc(len + 1, sizeof(char));
	if (c == NULL)
		return (NULL);
	while (len-- > 0)
	{
		c[i] = s[start + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

/*int	main(void)
{
	char s[] = "asdqwe";
	unsigned int	start;
	size_t	len;

	start = 8;
	len = 1;
	printf("%s", ft_substr(s, start, len))
}*/
