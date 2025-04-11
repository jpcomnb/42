/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:28:42 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/05 16:35:35 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	p;

	p = 0;
	while (src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	string[] = "word";
	char	string2[] = "lol";

	printf("string is %s\nstring2 is %s\n", string, string2);
	ft_strcpy(string, string2);
	printf("string is %s\nstring2 is %s", string, string2);
}*/
