/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:39:50 by jopedro4          #+#    #+#             */
/*   Updated: 2025/09/17 20:59:16 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_check_string(char *string, bool *error)
{
	int		i;
	char	**array;
	long	l;

	i = 0;
	l = 0;
	while (string[i])
	{
		if (!ft_isdigit(string[i]))
		{
			*error = true;
			return (NULL); 
		}
		i++;
	}
	i = 0;
	array = ft_split(string, ' ');
	while (array[i])
	{
		l = ft_atol(&string[i]);
		i++;
	}
	if (l > INT_MAX || l < INT_MIN)
	{
		*error = true;
		return (NULL);
	}
	return ((int *)l);
}
