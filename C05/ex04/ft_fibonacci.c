/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:28:44 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/26 16:39:59 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int main(void)
{
    int index;
    
    printf("Entrez l'indice de Fibonacci (un entier non négatif) : ");
    scanf("%d", &index);
    
    int result = ft_fibonacci(index);
    
    if (result == -1)
        printf("L'indice doit être un entier non négatif.\n");
    else
        printf("Fibonacci(%d) = %d\n", index, result);
    
    return 0;
}
*/