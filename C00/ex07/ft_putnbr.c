/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 05:26:20 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/29 16:44:12 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_pow(int num1, int num2)
{
	int	i;
	int	j;

	j = num1;
	i = 1;
	while (i < num2)
	{
		num1 = num1 * j;
		i++;
	}
	return (num1);
}

int	ft_countdigit(int num)
{
	int	i;

	i = 1;
	while (num / 10 != 0)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	j;
	int	l;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	j = nb;
	i = ft_countdigit(nb) - 1;
	if (j < 0)
	{
		j = j * (-1);
		ft_putchar('-');
	}
	while (i != 0)
	{
		l = j / (ft_pow(10, i));
		ft_putchar((l % 10) + '0');
		i--;
	}
	ft_putchar((j % 10) + '0');
}
// int main(void)
// {
// 	ft_putnbr(-14234);
// }
