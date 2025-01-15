/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:03:06 by vakande           #+#    #+#             */
/*   Updated: 2025/01/15 16:03:28 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (res == 0)
	{
		if (s1[i] != s2[i])
			res = s1[i] - s2[i];
		else if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		else
			i++;
	}
	return (res);
}

void	ft_aff(int argc, char **argv)
{
	int	x;

	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		ft_putchar('\n');
		x++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*backup;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) < 0)
				{
					backup = argv[i];
					argv[i] = argv[j];
					argv[j] = backup;
				}
				j++;
			}
			i++;
		}
		ft_aff(argc, argv);
	}
}
