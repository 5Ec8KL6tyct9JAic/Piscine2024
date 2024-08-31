/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:00:52 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/31 19:05:56 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_solve(int **puzzle, int i)
{
	int	val;

	if (i == 16 && is_valid_array(puzzle))
	{
		return (1);
	}
	if (i < 16)
	{
		val = 1;
		while (val < 5)
		{
			if (is_valid_value(puzzle, i, val))
			{
				puzzle[i / 4 + 1][i % 4 + 1] = val;
				if (ft_solve(puzzle, i + 1))
					return (1);
			}
			val++;
		}
	}
	return (0);
}
