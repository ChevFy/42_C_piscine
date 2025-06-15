/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:16:15 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/03 07:58:37 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_board(int queen_position[])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(queen_position[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	ft_is_queen_attackable(int queen_position[], int cr)
{
	int	i;

	i = 0;
	while (i < cr)
	{
		if ((queen_position[i] == queen_position[cr]) && (i != cr))
			return (1);
		if (queen_position[i] == queen_position[cr] - (cr - i)
			|| queen_position[i] == queen_position[cr] + (cr - i))
			return (1);
		i++;
	}
	return (0);
}

void	ft_solve(int queen_position[], int *solution, int current_row)
{
	int	current_col;

	if (current_row == 10)
	{
		ft_print_board(queen_position);
		(*solution)++;
	}
	else
	{
		current_col = 0;
		while (current_col < 10)
		{
			queen_position[current_row] = current_col;
			if (!ft_is_queen_attackable(queen_position, current_row))
				ft_solve(queen_position, solution, current_row + 1);
			current_col++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	queen_position[10];
	int	solution;

	solution = 0;
	ft_solve(queen_position, &solution, 0);
	return (solution);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	cnt;

// 	cnt = 0;
// 	cnt = ft_ten_queens_puzzle();
// 	printf("Total valid solutions = %d\n", cnt);
// 	return (0);
// }