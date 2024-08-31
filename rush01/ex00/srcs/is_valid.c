/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:32:55 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/31 18:55:11 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_left(int **puzzle, int index, int value)
{
	while (index % 4 != 0)
	{
		index--;
		if (puzzle[index / 4 + 1][index % 4 + 1] == value)
			return (0);
	}
	return (1);
}

int	ft_up(int **puzzle, int index, int value)
{
	while (index / 4 != 0)
	{
		index -= 4;
		if (puzzle[index / 4 + 1][index % 4 + 1] == value)
			return (0);
	}
	return (1);
}

int	is_valid_value(int **puzzle, int index, int value)
{
	if (!ft_up(puzzle, index, value) || !ft_left(puzzle, index, value))
	{
		return (0);
	}
	return (1);
}

int	is_valid_array(int **puzzle)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (!check_row_up(puzzle, i) || !check_row_down(puzzle, i)
			|| !check_line_left(puzzle, i) || !check_line_right(puzzle, i))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
