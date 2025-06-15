/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:57:28 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/01 23:33:18 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar_ft(char c)
{
	c += 48;
	write(1, &c, 1);
}

void	ft_print_output(int **grids)
{
	int	rows;
	int	cols;

	rows = 0;
	while (rows < 4)
	{
		cols = 0;
		while (cols < 4)
		{
			putchar_ft(grids[rows][cols]);
			if (cols != 3)
			{
				write(1, " ", 1);
			}
			cols++;
		}
		write(1, "\n", 1);
		rows++;
	}
}
