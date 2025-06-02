/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:42:20 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/15 18:15:13 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	t;
	size_t	l;
	size_t	len2;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (len > 0 && big[i])
	{
		t = 0;
		t += i;
		l = 0;
		len2 = len;
		while (big[t++] == little[l++] && len2 > 0)
		{
			if (little[l] == '\0' && len2 != '\0')
				return ((char *)big + i);
			len2--;
		}
		len--;
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	big[] = "aaxx";
	const char	little[] = "xx";
	size_t		len;

	len	= 6;

	printf("%s", ft_strnstr(big, little, len));
}*/
