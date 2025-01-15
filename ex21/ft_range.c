/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:08:12 by vakande           #+#    #+#             */
/*   Updated: 2025/01/15 16:26:56 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ptr;
	int		x;
	int		y;

	if (min < max)
	{
		ptr = (int *)malloc(sizeof(int) *(max - min));
		x = 0;
		y = min;
		while (x < (max - min))
		{
			ptr[x] = y;
			y++;
			x++;
		}
		return (ptr);
	}
	return (0);
}
