/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:45:11 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/26 16:31:23 by npongtam         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (ft_is_prime(nb) == 1)
		return (nb);
	if (nb <= 0)
		return (2);
	i = 0;
	while (i != nb)
	{
		nb++;
		if (ft_is_prime(nb) == 0)
			i++;
		else
			return (nb);
	}
	return (nb);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("after 1 is %d\n" , ft_find_next_prime(1));
// 	printf("after 17 is %d\n" , ft_find_next_prime(17));
// 	printf("after 2 is %d\n" , ft_find_next_prime(2));
// 	printf("after 111 is %d\n" , ft_find_next_prime(111));
// 	printf("after -10000 is %d\n" , ft_find_next_prime(-1000));

// }