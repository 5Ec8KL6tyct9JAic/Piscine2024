/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:52:08 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/21 14:54:44 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{in
	printf("%d\n", ft_str_is_lowercase("a11wd"));
	printf("%d\n", ft_str_is_lowercase("11a11"));
	printf("%d\n", ft_str_is_lowercase("AAAassaA"));
	printf("%d\n", ft_str_is_lowercase("aavasdasda"));
	printf("%d\n", ft_str_is_lowercase(""));
}
*/