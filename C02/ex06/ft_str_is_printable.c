/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:56:56 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/21 16:41:43 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d\n", ft_str_is_printable("a11wd"));
	printf("%d\n", ft_str_is_printable("11a11"));
	printf("%d\n", ft_str_is_printable("AAAassaA"));
	printf("%d\n", ft_str_is_printable("aavasdasda"));
	printf("%d\n", ft_str_is_printable("ASDASDADA"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("\n \t \v \f"));
}
*/