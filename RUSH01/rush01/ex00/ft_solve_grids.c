/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_grids.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:44:08 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/01 23:33:21 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_all_view_valid(int **grids, int *clues);
int	is_column_valid(int **grids, int row);

int	ft_solve(int row, int **grids, int *clues, char **permute)
{
	int	i;
	int	j;

	if (row == 4)
	{
		if (is_all_view_valid(grids, clues))
			return (1);
		return (0);
	}
	i = 0;
	while (i < 24)
	{
		j = -1;
		while (++j < 4)
		{
			grids[row][j] = permute[i][j] - '0';
		}
		if (is_column_valid(grids, row))
		{
			if (ft_solve(row + 1, grids, clues, permute))
				return (1);
		}
		i++;
	}
	return (0);
}
