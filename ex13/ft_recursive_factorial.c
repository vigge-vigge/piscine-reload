/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:19:58 by vakande           #+#    #+#             */
/*   Updated: 2025/01/12 19:05:40 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb <= 14)
	{
		if (nb == 0 || nb == 1)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
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

    // Call the factorial function and print the result
    int fact = ft_recursive_factorial(number);

    // Check if the function returned an error (0 indicates error)
    if (fact == 0) {
        printf("An error occurred. Factorial is not
		defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", number, fact);
    }

    return 0;
}
*/
