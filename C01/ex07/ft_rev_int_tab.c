/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:44:10 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/21 10:33:53 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = sizeof(tab) / sizeof(tab[0]);

	printf("Tableau avant inversion :\n");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("Tableau après inversion :\n");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return (0);
}
*/