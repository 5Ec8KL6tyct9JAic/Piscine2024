/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:20:26 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/19 17:56:49 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	u = '0';
	while (u <= '7')
	{
		d = u + 1;
		while (d <= '8')
		{
			c = d + 1;
			while (c <= '9')
			{
				write(1, &u, 1);
				write(1, &d, 1);
				write(1, &c, 1);
				if (!(u == '7' && d == '8' && c == '9'))
					write(1, ", ", 2);
				c++;
			}
			d++;
		}
		u++;
	}
}

/*
int main()
{
	ft_print_comb();
}
*/