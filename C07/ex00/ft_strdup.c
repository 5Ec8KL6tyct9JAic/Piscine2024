/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:51:00 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/28 13:16:53 by davvaler         ###   ########.fr       */
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
	return (new_string);
}
