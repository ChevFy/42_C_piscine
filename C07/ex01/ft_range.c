/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:23:08 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/27 12:46:58 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*keep;
	int	i;

	i = 0;
	keep = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		keep = NULL;
		return (0);
	}
	while (min < max)
	{
		keep[i] = min;
		min++;
		i++;
	}
	return (keep);
}

// #include <stdio.h>

// void	print_array(int *array, int size)
// {
// 	int	i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	print_array(ft_range(1, 5), 4);
// 	printf("\n");
// 	print_array(ft_range(-2, 10), 12);
// 	printf("\n");
// 	print_array(ft_range(5, 5), 5);
// 	printf("\n");
// 	print_array(ft_range(6, 1), 5);
// 	printf("\n");
// }
