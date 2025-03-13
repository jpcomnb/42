/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:52:42 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/12 17:24:48 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	i = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	string1[] = "all your bases ";
	char	string2[] = "are belong to us";
	unsigned int	nb;

	nb = 2;
	printf("%s", ft_strncat(string1, string2, nb));
	return (0);
}*/
