/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:05:23 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/26 14:29:48 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n" , ft_recursive_factorial(5));
//     printf("%d\n" , ft_recursive_factoria(4));
//     printf("%d\n" , ft_recursive_factoria(3));
//     printf("%d\n" , ft_recursive_factoria(2));
//     printf("%d\n" , ft_recursive_factoria(1));
//     printf("%d\n" , ft_recursive_factoria(0));

// }

/*
Logic

example	ft_recursive_factorial(5)

first loop : return 5 * ft(4)

second loop : return 4 * ft(3)

third loop : return 3 * ft(2)

fourth loop : return 2 * ft(1)

fifth loop : return 1  <- until base case (stop)

full : 5 * 4 * 3 * 2 * 1  = 120


*/