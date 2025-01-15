/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:15:36 by vakande           #+#    #+#             */
/*   Updated: 2025/01/12 18:51:38 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		ft_putchar(str[num]);
		num++;
	}
}
/*
#include <stdio.h>
int main()
{
    // Define a string to be printed
    char str[] = "Hello, World!\n";

    // Call the function to print the string
    ft_ft_putstr(str);

    return 0;
}
*/
