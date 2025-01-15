/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:43:33 by vakande           #+#    #+#             */
/*   Updated: 2025/01/15 13:28:41 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
		{
			result *= nb;
			nb -= 1;
		}
		return (result);
	}
	else
		return (0);
}
/*
#include <stdio.h>
int main() {
    int number;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the factorial function and print the result
    printf("Factorial of %d is %d\n", number, ft_iterative_factorial(number));

    return 0;
}
*/
