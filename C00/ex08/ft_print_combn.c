/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:03:39 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/20 11:37:07 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	gen_comb(int n, int pos, int start, char *result)
{
	int	i;

	if (pos == n)
	{
		write(1, result, n);
		if (result[0] != '9' - n + 1)
			write(1, ", ", 2);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		result[pos] = i + '0';
		gen_comb(n, pos + 1, i + 1, result);
		i++;
	}
}

void	print_comb(int n)
{
	char	result[10];

	gen_comb(n, 0, 0, result);
}

/*
int main()
{
	print_comb(2);
	return (0);
}
*/