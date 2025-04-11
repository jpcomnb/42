/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:03:49 by jopedro4          #+#    #+#             */
/*   Updated: 2025/03/13 15:45:35 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int		n;
	int		i;

	n = 0;
	i = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i])
	{
		n = 0;
		while (str[i + n] == to_find[n])
		{
			n++;
			if (to_find[n] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

//#include <stdio.h>

/*int	main(void)
{
	char	string1[] = "123456789";
	char	string2[] = "456";
	printf("%s", ft_strstr(string1, string2));
}*/
