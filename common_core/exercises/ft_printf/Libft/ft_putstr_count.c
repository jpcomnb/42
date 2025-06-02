/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:52:19 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/31 21:29:31 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_count(char *string)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!string)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (string[i] == '\0')
		return (0);
	while (string[i])
	{
		count++;
		write(1, &string[i], 1);
		i++;
	}
	return (count);
}

/*int	main(void)
{
	char *string= "wow so cool";

	printf("%s\n", string);
	printf("\n%i\n", ft_putstr_count(string));
}*/
