/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:36:19 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/21 13:52:50 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	char	src[] = "cinquante";
	char	dest[] = "wawa";

	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", strncpy(dest, src, 2));
}
*/