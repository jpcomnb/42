/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:41:06 by jopedro4          #+#    #+#             */
/*   Updated: 2025/06/10 21:52:57 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int	main(void)
{
	char string[30] = "chumbucket";

	printf("%i", ft_strlen(string));
}
