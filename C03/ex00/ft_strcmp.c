/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:17:10 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/22 11:30:23 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int main()
{
	char	s1[] = "abbccc"; // s1 == s2
	char	s2[] = "abbccc";
	char	s3[] = "abccc"; // s1 < s2
	char	s4[] = "abbccc";
	char	s5[] = "abbbccc"; // s1 > s2
	char	s6[] = "abbccc";

	printf("%d\n", ft_strcmp(s1,s2));
	printf("%d\n", ft_strcmp(s3,s4));
	printf("%d\n", ft_strcmp(s5,s6));
}
*/