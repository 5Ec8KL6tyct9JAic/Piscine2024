/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:23:32 by davvaler          #+#    #+#             */
/*   Updated: 2024/09/11 13:22:40 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = (void *) 0;
		return (0);
	}
	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}

#include <stdio.h>

int	main(void)
{
	int	*range;
	int	size;
	int	min;
	int	max;
	int	i;

	printf("Entrez la valeur de min : ");
	scanf("%d", &min);
	printf("Entrez la valeur de max : ");
	scanf("%d", &max);
	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("Erreur : allocation mémoire échouée.\n");
		return (1);
	}
	printf("Taille du tableau: %d\n", size);
	for (i = 0; i < size; i++)
	{
		printf("range[%d] = %d\n", i, range[i]);
	}
	free(range);
	return (0);
}