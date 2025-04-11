/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 23:59:08 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/12 00:32:25 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[i] == (const char)c)
		return ((char *)&s[i]);
	while (s[i] != (const char)c && s[i] == '\0')
	{
		i++;
		if (s[i] == c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
