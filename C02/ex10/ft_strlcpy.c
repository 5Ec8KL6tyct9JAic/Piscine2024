/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:44:49 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/21 18:06:00 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned	int	ft_strlcpy(char *dest,
					char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_l;

	str_l = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (str_l);
}

/*
#include <stdio.h>

// Déclaration des fonctions
int	ft_strlen(char *str);
unsigned int	ft_strlcpy
(char *dest, char *src, unsigned int size);
*/

/*
int	main(void)
{
	char src[] = "Chatgpt fais le main";
	char dest[30];
	unsigned int copied_length;

	printf("Length of '%s': %d\n", src, ft_strlen(src));
	copied_length = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copied '%s' into dest. 
	Destination now contains: '%s'\n", src, dest);
	printf("Length of source: %d, Length attempted
	to copy: %u\n", ft_strlen(src), copied_length);

	return (0);
}
*/