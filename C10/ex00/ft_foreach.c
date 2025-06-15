/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 19:09:52 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/08 19:23:52 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	long int	n;

// 	n = nb;

// 	if (n < 0)
// 	{
// 		ft_putchar('-');
// 		n *= -1;
// 	}
// 	if (n >= 0 && n <= 9)
// 		ft_putchar(n + '0');
// 	if (n > 9)
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putnbr(n % 10);
// 	}
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int main()
// {
// 	int tab[5] = {10 , 20 , 30 , 40 ,50 };
// 	ft_foreach(tab , 5 , &ft_putnbr);
// }
