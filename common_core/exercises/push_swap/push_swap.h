/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:05:59 by jopedro4          #+#    #+#             */
/*   Updated: 2025/07/22 16:06:07 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct	list_s
{
	int		num;
	int		cost;
	int		final_position;
	list_s	*next;
	list_s	*prev;
}	list_t;

void	push_swap(char	*string);
#endif
