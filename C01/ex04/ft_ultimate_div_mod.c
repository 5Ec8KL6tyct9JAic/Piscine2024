/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultinate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:45:22 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/20 17:51:54 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/*
#include "printf.h"

int	main()
{
	int a = 20;
	int b = 4;

	printf("a : %d, b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a : %d, b : %d\n", a, b);
}
*/