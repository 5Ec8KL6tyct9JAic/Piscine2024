/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:01:22 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/26 13:39:58 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 14) || str[i] == 32)
		i++;
	while (str[i] != '\0' && ((str[i] == '+') || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	return (number * sign);
}
/*
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    char str1[] = "   \t\n\r\v\f   -12345";
    char str2[] = "   \t\n\r\v\f   +67890";
    char str3[] = "42";
    char str4[] = "   0";
    char str5[] = "-2147483648";
    char str6[] = "   \t\n\r\v\f   +";
    char str7[] = "   \t\n\r\v\f   -";

    printf("String: \"%s\"\n", str1);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str1), atoi(str1));

    printf("String: \"%s\"\n", str2);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str2), atoi(str2));

    printf("String: \"%s\"\n", str3);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str3), atoi(str3));

    printf("String: \"%s\"\n", str4);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str4), atoi(str4));

    printf("String: \"%s\"\n", str5);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str5), atoi(str5));

    printf("String: \"%s\"\n", str6);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str6), atoi(str6));

    printf("String: \"%s\"\n", str7);
    printf("ft_atoi: %d, atoi: %d\n\n", ft_atoi(str7), atoi(str7));

    return 0;
}
*/