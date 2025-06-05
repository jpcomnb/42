/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:54:53 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/07 21:59:28 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	int	i;

	i = 'a';
	printf("%d", ft_isalnum(i));
	i = 'V';
	printf("%d", ft_isalnum(i));
	i = '6';
	printf("%d", ft_isalnum(i));
	i = '!';
	printf("%d", ft_isalnum(i));
}*/
