/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:50:37 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/04 16:12:57 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int		length;
	int		i;

	length = ft_strlen(str) + 1;
	copy = malloc(sizeof(char) * length);
	if (!copy)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int	main(void)
{
	char	*str;
	char	*copy;

	str = "this is a string, trust";
	copy = ft_strdup(str);
	printf("oregano: %s\n", str);
	printf("Copy: %s\n", copy);
	free(copy);
	printf("Copy: %s\n", copy);
	return (0);
}*/
