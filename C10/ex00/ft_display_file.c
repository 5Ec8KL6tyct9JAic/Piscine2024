/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:15:02 by davvaler          #+#    #+#             */
/*   Updated: 2024/09/02 17:57:20 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int ac, char **av)
{
	char	c;
	int		fd;

	fd = open(av[1], O_RDONLY);
	if (ac < 2)
		return (NO_ARGS);
	else if (ac > 2)
		return (TOO_MANY_ARGS);
	else if (fd < 0)
		return (UNREADABLE);
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close (fd);
	return (0);
}
