/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:16:20 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/26 16:03:16 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int main(void)
// {
//     printf("1 = is prime , 0 = isn't prime\n");
//     printf("4 is %d\n" , ft_is_prime(4));
//     printf("5 is %d\n" , ft_is_prime(5));
//     printf("17 is %d\n" , ft_is_prime(17));
//     printf("-1 is %d\n" , ft_is_prime(-1));

// }