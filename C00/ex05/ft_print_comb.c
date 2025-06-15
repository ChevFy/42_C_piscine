/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:14:42 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/21 13:10:46 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char first, char second, char third)
{
	char	com;
	char	space;

	com = ',';
	space = ' ';
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (first != '7' || second != '8' || third != '9')
	{
		write(1, &com, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '0';
	third = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_print(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}

// int main(void)
// {
// 	ft_print_comb();
// }