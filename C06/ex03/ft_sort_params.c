/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:01:12 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/27 19:19:25 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	display(int ac, char *av[])
{
	int	i;
	int	j;

	i = 0;
	while (i++ < ac - 1)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (i++ < (ac - 1))
	{
		if (i + 1 < ac && ft_strcmp(av[i + 1], av[i]) < 0)
		{
			av[ac + 1] = av[i];
			av[i] = av[i + 1];
			av[i + 1] = av[ac + 1];
			i = 0;
		}
	}
	display(ac, av);
	return (0);
}
