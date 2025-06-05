/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:43:54 by jopedro4          #+#    #+#             */
/*   Updated: 2025/05/28 19:10:31 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*void só recebe valores não devolve*/
/*ft_putchar(char c ) define a variavel c para ser usada no write*/
/*char defines what type of interger it is, 
char is does not work with numbers*/
/*ft_putchar('c') defines ft_putchar as the letter c*/
#include "libft.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

/*int	main(void)
{
	ft_putchar('c');
}*/
