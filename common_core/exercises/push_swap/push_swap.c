/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:48:07 by jopedro4          #+#    #+#             */
/*   Updated: 2025/07/27 01:07:40 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(char **string)
{
	
	write(1, '\n', 1);
}

int main(int argc, const char  **argv)
{
	int		i;
	list_t	*list;
	char	**chars;
	bool	single;

	i = 0;
	if (argc == 1 || argc == 2 || !argv[1][0])
		return (0);
	if (argc ==2)
	{
		check_char();
		chars = ft_split(argv[1], ' ');
		while (chars[i])
		{
			list->num = ft_atoi(chars[i]);
			i++;
			list = list->next;
		}
	}
	push_swap(list);
	return (0);
}
