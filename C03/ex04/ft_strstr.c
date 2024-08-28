/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:56:27 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/22 12:23:48 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Echarpe Camomille Carotte Gremlin Sardine Chimie";
	char to_find[] = "Sardine";

	printf("%s\n",ft_strstr(str, to_find));
	printf("%s\n",strstr(str, to_find));
}
*/