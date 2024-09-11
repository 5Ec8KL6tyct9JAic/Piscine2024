/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:14:51 by davvaler          #+#    #+#             */
/*   Updated: 2024/09/02 18:00:00 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE
# define FT_DISPLAY_FILE

# define NO_ARGS write(2, "File name missing.\n", 19)
# define TOO_MANY_ARGS write(2, "Too many arguments.\n", 20)
# define UNREADABLE write(2, "Cannot read file.\n", 18)
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

#endif