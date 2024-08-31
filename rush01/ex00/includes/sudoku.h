/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:01:49 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/31 19:04:22 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>

void	ft_print_puzzle(int **puzzle);
void	init_borders(int **puzzle, char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_solve(int **puzzle, int i);
int		check_row_up(int **puzzle, int row);
int		check_row_down(int **puzzle, int row);
int		check_line_left(int **puzzle, int line);
int		check_line_right(int **puzzle, int line);
int		**init_puzzle(char *str);
int		ft_left(int **puzzle, int index, int value);
int		ft_up(int **puzzle, int index, int value);
int		is_valid_value(int **puzzle, int index, int value);
int		is_valid_array(int **puzzle);

#endif