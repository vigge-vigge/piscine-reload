/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:31:04 by vakande           #+#    #+#             */
/*   Updated: 2025/01/12 17:11:49 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
    int number;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the square_root function and print the result
    int result = ft_sqrt(number);

    // Check if the result is 0 (indicating no perfect square root found)
    if (result == 0) {
        printf("The square root is irrational or the number is negative.\n");
    } else {
        printf("The square root of %d is %d\n", number, result);
    }

    return 0;
}
*/
