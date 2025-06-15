/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:45:16 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/26 14:05:45 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n" , ft_iterative_factorial(5));
//     printf("%d\n" , ft_iterative_factorial(4));
//     printf("%d\n" , ft_iterative_factorial(3));
//     printf("%d\n" , ft_iterative_factorial(2));
//     printf("%d\n" , ft_iterative_factorial(1));
//     printf("%d\n" , ft_iterative_factorial(0));

// }

// I think these video can help you to do C05.
// keep fighting!!
// Recursive function: https://www.youtube.com/watch?v=rf60MejMz3E
// Fibonacci: https://www.youtube.com/watch?v=zg-ddPbzcKM
// Prime number: https://www.youtube.com/watch?v=CI0sQaQ1tIY