/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:55:25 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/06 18:25:57 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			nbr++;
		i++;
	}
	return (nbr);
}

/*int	ft_exist(char *tab)
{
	int	i;
	i = 0;
	if (tab[i] != '\0')
		return (1);
	return (0);
}

int	main(void)
{
	int result;
	char	*tab[] = {"hello", "world", "home", "sweet", "home", "!", 0};
	result = ft_count_if(tab, ft_exist);
	printf("%i", result);
}*/
