/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 20:23:50 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/10 21:40:47 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

/*int	main(void)
{
	char	s1[12] = "poop";
	char	s2[12] = "banana";
	char	*s3;
	
	s3 = ft_strcpy(s1, s2);
	printf("%s", s3);
}*/
