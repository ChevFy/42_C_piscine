/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_col_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:41:09 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/01 23:33:05 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_column_valid(int **grids, int row)
{
	int	j;
	int	i;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < row)
		{
			if (grids[i][j] == grids[row][j])
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}
