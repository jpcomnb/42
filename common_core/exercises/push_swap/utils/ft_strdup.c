/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:22:06 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/16 14:37:59 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ptr;
	size_t	n;

	n = ft_strlen(s);
	i = 0;
	ptr = (char *)malloc((sizeof(char) * n) + 1);
	if (ptr == NULL)
		return (NULL);
	while (n-- > 0)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char s[]= "qwerty";
	char *d;

	d = ft_strdup(s);
	printf("%s", d);
}*/
