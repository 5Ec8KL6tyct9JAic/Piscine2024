/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:31:57 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/26 19:41:01 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	char s1[] = "Main";
	char s2[] = "Mains";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s2, s1, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));
}
*/
