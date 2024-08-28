/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:47:34 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/21 16:41:17 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_str_is_numeric("a11wd"));
	printf("%d\n", ft_str_is_numeric("1111"));
	printf("%d\n", ft_str_is_numeric(""));
}
*/