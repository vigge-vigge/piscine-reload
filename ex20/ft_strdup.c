/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:12:35 by vakande           #+#    #+#             */
/*   Updated: 2025/01/15 16:34:28 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!(new))
		return (NULL);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "Hello, World!";

    // Test ft_strlen
    printf("Original string: %s\n", str);
    printf("Length of string: %d\n", ft_strlen(str));

    // Test ft_strdup
    char *duplicate = ft_strdup(str);

    if (duplicate)
    {
        printf("Duplicated string: %s\n", duplicate);
        free(duplicate);  
		// Don't forget to free the memory allocated by ft_strdup
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    return 0;
}
*/
