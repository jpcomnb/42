/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro4 <jopedro4@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:17:33 by jopedro4          #+#    #+#             */
/*   Updated: 2025/04/05 17:04:17 by jopedro4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
#define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

#endif

int main()
{
	t_point n;
	t_point *p;

	n.x = 1;
	n.y = 2;

	p->x = 1;
	p->y = 2;
}
