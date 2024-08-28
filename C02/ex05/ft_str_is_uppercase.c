/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:54:14 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/21 16:41:35 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase("a11wd"));
	printf("%d\n", ft_str_is_uppercase("11a11"));
	printf("%d\n", ft_str_is_uppercase("AAAassaA"));
	printf("%d\n", ft_str_is_uppercase("aavasdasda"));
	printf("%d\n", ft_str_is_uppercase("ASDASDADA"));
	printf("%d\n", ft_str_is_uppercase(""));
}
*/