/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:54:34 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/26 14:45:42 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
		result *= nb--;
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
    int number;
    int result;

    printf("Donne un nombre : ");
    scanf("%d", &number);

    result = ft_iterative_factorial(number);

    if (number < 0)
        printf("CHEF t'es dans les negatifs la\n");
    else
        printf("La factorielle de %d est %d\n", number, result);

    return 0;
}
*/