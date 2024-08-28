/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:21:29 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/26 16:39:06 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	int number;
	int power;
	int result;

	printf("Donne un nombre : ");
	scanf("%d", &number);
	printf("Puissance combien : ");
	scanf("%d", &power);

	result = ft_recursive_power(number, power);

	if (number < 0)
		printf("CHEF t'es dans les negatifs la\n");
	else
		printf("%d^%d : %d\n", number, power, result);

	return 0;
}
*/