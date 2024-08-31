/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davvaler <davvaler@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:46:22 by davvaler          #+#    #+#             */
/*   Updated: 2024/08/31 19:07:42 by davvaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	check_args(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) != 4 * 8 - 1)
		return (0);
	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 0 && (argv[1][i] < '1' || argv[1][i] > '4'))
			return (0);
		else if (i % 2 == 1 && argv[1][i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	**puzzle;
	int	i;

	if (!check_args(argc, argv))
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	puzzle = init_puzzle(argv[1]);
	if (!puzzle)
		return (-1);
	if (ft_solve(puzzle, 0))
		ft_print_puzzle(puzzle);
	else
		write(2, "Error\n", 6);
	i = 0;
	while (i < 6)
		free(puzzle[i++]);
	free(puzzle);
	return (0);
}
