/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_row.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:41:09 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/01 23:33:08 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid_row(int row, int col, int **grid, int current)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i == col)
		{
			i++;
			continue ;
		}
		if (grid[row][i] == current)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_valid_col(int row, int col, int **grid, int current)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i == row)
		{
			i++;
			continue ;
		}
		if (grid[i][col] == current)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_col_row_valid(int row, int col, int **grid, int current)
{
	return (ft_is_valid_col(row, col, grid, current) && ft_is_valid_row(row,
			col, grid, current));
}
