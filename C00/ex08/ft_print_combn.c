/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:03:14 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/21 13:03:37 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recursive(int n, int combi[], int current, int start)
{
	int	i;
	int	j;

	i = 0;
	if (current == n)
	{
		while (i < n)
		{
			ft_putchar(combi[i] + '0');
			i++;
		}
		if (i != n - 1 && combi[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	j = start;
	while (j <= 10 - (n - current))
	{
		combi[current] = j;
		ft_print_combn_recursive(n, combi, current + 1, j + 1);
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	output[10];

	if (n > 0 && n < 10)
	{
		ft_print_combn_recursive(n, output, 0, 0);
	}
	else
		return ;
}

// int	main(void)
// {
// 	ft_print_combn(9);
// }