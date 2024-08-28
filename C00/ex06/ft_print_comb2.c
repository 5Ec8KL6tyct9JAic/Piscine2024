/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:57:33 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/21 16:58:22 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_number(char c, unsigned int nb)
{
	char	result;

	result = 0;
	if (nb == 0)
		result = c / 10 + '0';
	else
		result = c % 10 + '0';
	return (result);
}

void	ft_print_comb2(void)
{
	int	l;
	int	r;

	l = 0;
	while (l <= 98)
	{
		r = l + 1;
		while (r <= 99)
		{
			ft_putchar(ft_number(l, 0));
			ft_putchar(ft_number(l, 1));
			ft_putchar(' ');
			ft_putchar(ft_number(r, 0));
			ft_putchar(ft_number(r, 1));
			if (!(l == 98 && r == 99))
				write(1, ", ", 2);
			r++;
		}
		l++;
	}
}


int main()
{
	ft_print_comb2();
}
