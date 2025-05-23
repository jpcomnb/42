/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:40:16 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/24 19:03:17 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_l;
	size_t	s2_l;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	ptr = ft_calloc((s1_l + s2_l) + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcat(ptr, s1, s1_l + 1);
	ft_strlcat(ptr, s2, ft_strlen(ptr) + s2_l + 1);
	return (ptr);
}

/*int	main()
{
	char const s[] = "";
	char const s2[] = "";
	char const *s3;

	s3 = ft_strjoin(s, s2);
	printf("%s", s3);
}*/
