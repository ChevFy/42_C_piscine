/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:29:26 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/26 15:14:07 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

// #include <stdio.h>

// int main(void)
// {
//     printf("2 ^ 2 = %d\n" , ft_recursive_power(2,2));
//     printf("2 ^ 3 = %d\n" , ft_recursive_power(2,3));
//     printf("3 ^ 10 = %d\n" , ft_recursive_power(3,10));
//     printf("10 ^ 2 = %d\n" , ft_recursive_power(10,2));
//     printf("1 ^ 0 = %d\n" , ft_recursive_power(1,0));
// }