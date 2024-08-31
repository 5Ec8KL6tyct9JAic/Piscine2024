/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:25:24 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/31 18:55:08 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	init_borders(int **puzzle, char *str)
{
	int	strindex;
	int	puzzle_index;

	strindex = 0;
	puzzle_index = 1;
	while (strindex < 31)
	{
		if (strindex < 7)
			puzzle[0][puzzle_index] = str[strindex] - '0';
		else if (strindex < 15)
			puzzle[5][puzzle_index] = str[strindex] - '0';
		else if (strindex < 23)
			puzzle[puzzle_index][0] = str[strindex] - '0';
		else if (strindex < 31)
			puzzle[puzzle_index][5] = str[strindex] - '0';
		puzzle_index++;
		if (puzzle_index % 5 == 0)
			puzzle_index = 1;
		strindex += 2;
	}
}

int	**init_puzzle(char *str)
{
	int	index;
	int	**puzzle;
	int	i;

	puzzle = malloc(6 * sizeof(int *));
	if (!puzzle)
		return (NULL);
	i = 0;
	while (i < 6)
	{
		puzzle[i] = malloc(6 * sizeof(int));
		if (!puzzle)
			return (NULL);
		i++;
	}
	index = 0;
	while (index < 36)
	{
		puzzle[index / 6][index % 6] = 0;
		index++;
	}
	init_borders(puzzle, str);
	return (puzzle);
}
