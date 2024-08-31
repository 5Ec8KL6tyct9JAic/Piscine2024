/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:17:24 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/31 18:55:09 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	check_row_up(int **puzzle, int row)
{
	int	j;
	int	max;
	int	count;

	max = 0;
	j = 1;
	count = puzzle[0][row];
	while (j < 5)
	{
		if (puzzle[j][row] > max)
		{
			max = puzzle[j][row];
			count--;
		}
		j++;
	}
	if (count != 0)
		return (0);
	return (1);
}

int	check_row_down(int **puzzle, int row)
{
	int	j;
	int	max;
	int	count;

	max = 0;
	j = 4;
	count = puzzle[5][row];
	while (j > 0)
	{
		if (puzzle[j][row] > max)
		{
			max = puzzle[j][row];
			count--;
		}
		j--;
	}
	if (count != 0)
		return (0);
	return (1);
}

int	check_line_left(int **puzzle, int line)
{
	int	j;
	int	max;
	int	count;

	max = 0;
	j = 1;
	count = puzzle[line][0];
	while (j < 5)
	{
		if (puzzle[line][j] > max)
		{
			max = puzzle[line][j];
			count--;
		}
		j++;
	}
	if (count != 0)
		return (0);
	return (1);
}

int	check_line_right(int **puzzle, int line)
{
	int	j;
	int	max;
	int	count;

	max = 0;
	j = 4;
	count = puzzle[line][5];
	while (j > 0)
	{
		if (puzzle[line][j] > max)
		{
			max = puzzle[line][j];
			count--;
		}
		j--;
	}
	if (count != 0)
		return (0);
	return (1);
}
