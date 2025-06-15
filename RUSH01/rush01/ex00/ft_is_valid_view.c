/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_view.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:44:06 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/01 23:33:10 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid_view_left_to_right(int *grids, int *clues, int row)
{
	int	visible;
	int	i;
	int	max;

	max = 0;
	i = 0;
	visible = 0;
	while (i < 4)
	{
		if (grids[i] > max)
		{
			visible++;
			max = grids[i];
		}
		i++;
	}
	if (visible == clues[row + 8])
		return (1);
	return (0);
}

int	is_valid_view_right_to_left(int *grids, int *clues, int row)
{
	int	visible;
	int	i;
	int	max;

	max = 0;
	i = 3;
	visible = 0;
	while (i >= 0)
	{
		if (grids[i] > max)
		{
			visible++;
			max = grids[i];
		}
		i--;
	}
	if (visible == clues[row + 12])
		return (1);
	return (0);
}

int	is_valid_view_top_to_down(int **grids, int *clues, int row, int col)
{
	int	visible;
	int	i;
	int	max;

	max = 0;
	i = 0;
	visible = 0;
	while (i < 4)
	{
		if (grids[i][row] > max)
		{
			visible++;
			max = grids[i][row];
		}
		i++;
	}
	if (visible == clues[col])
		return (1);
	return (0);
}

int	is_valid_view_down_to_top(int **grids, int *clues, int row, int col)
{
	int	visible;
	int	i;
	int	max;

	max = 0;
	i = 3;
	visible = 0;
	while (i >= 0)
	{
		if (grids[i][row] > max)
		{
			visible++;
			max = grids[i][row];
		}
		i--;
	}
	if (visible == clues[col + 4])
		return (1);
	return (0);
}

int	is_all_view_valid(int **grids, int *clues)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (!is_valid_view_left_to_right(grids[i], clues, i))
			return (0);
		if (!is_valid_view_right_to_left(grids[i], clues, i))
			return (0);
		if (!is_valid_view_top_to_down(grids, clues, i, i))
			return (0);
		if (!is_valid_view_down_to_top(grids, clues, i, i))
			return (0);
	}
	return (1);
}
