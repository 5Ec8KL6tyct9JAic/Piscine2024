/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:34:17 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/21 17:25:08 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {5, 2, 9, 1, 4};
	int	size = sizeof(tab) / sizeof(tab[0]);

	// Affichage du tableau avant tri
	printf("Tableau avant tri :\n");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	// Tri du tableau
	ft_sort_int_tab(tab, size);

	// Affichage du tableau après tri
	printf("Tableau après tri :\n");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return (0);
}
