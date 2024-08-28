/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:35:32 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/26 14:45:52 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>

int main(void)
{
    int number;
    int result;

    printf("Donne un nombre : ");
    scanf("%d", &number);

    result = ft_recursive_factorial(number);

    if (number < 0)
        printf("CHEF t'es dans les negatifs la\n");
    else
        printf("La factorielle de %d est %d\n", number, result);

    return 0;
}
*/