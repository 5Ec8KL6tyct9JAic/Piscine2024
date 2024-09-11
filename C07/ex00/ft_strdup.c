/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:51:00 by davvaler          #+#    #+#             */
/*   Updated: 2024/09/11 13:10:15 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(char *src)
{
	char	*new_string;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	new_string = (char *)malloc(sizeof(char) * (i + 1));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
/*
#include <stdio.h>

int main(void)
{
    char *source = "Bonjour le monde!";
    char *copie;

    // Appel de ft_strdup pour dupliquer la chaîne source
    copie = ft_strdup(source);

    if (copie == NULL)
    {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }

    // Affichage de la chaîne dupliquée
    printf("Chaîne originale : %s\n", source);
    printf("Chaîne dupliquée : %s\n", copie);

    // Libération de la mémoire allouée pour la copie
    free(copie);

    return 0;
}*/