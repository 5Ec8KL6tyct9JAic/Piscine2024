/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:47:56 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/26 16:39:15 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
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
	printf("Puissance combien ? : ");
	scanf("%d", &power);

	result = ft_iterative_power(number, power);

	if (number < 0)
		printf("CHEF t'es dans les negatifs la\n");
	else
		printf("%d ^ %d : %d\n", number, power, result);

	return 0;
}
*/