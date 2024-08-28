/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:38:37 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/27 16:29:46 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int index;
	
	printf("Entrez un nombre (un entier non négatif) : ");
	scanf("%d", &index);
	
	int result = ft_sqrt(index);
	
	if (result == -1)
		printf("L'indice doit être un entier non négatif.\n");
	else
		printf("la racine carre de (%d) est egale a %d\n", index, result);
	
	return 0;
}
*/
