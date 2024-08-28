/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:36:21 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/20 18:43:15 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include "stdio.h"
#include "string.h"

int main()
{
	printf("%lu\n", strlen("1000"));
	printf("%d\n", ft_strlen("1000"));
}
*/