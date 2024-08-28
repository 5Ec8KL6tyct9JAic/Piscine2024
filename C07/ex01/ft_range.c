/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:16:44 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/28 15:49:46 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*
#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int	min, max;
	int	i, size;
	int	*range;

	printf("Entrez la valeur de min : ");
	scanf("%d", &min);
	printf("Entrez la valeur de max : ");
	scanf("%d", &max);
	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("range == NULL.\n");
		return (1);
	}
	size = max - min;
	i = 0;
	printf("Tableau généré :\n");
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
*/