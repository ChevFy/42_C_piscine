/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:09:42 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/27 15:19:44 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*keep;
	int	i;

	i = 0;
	keep = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (keep != NULL)
	{
		while (min < max)
		{
			keep[i] = min;
			min++;
			i++;
		}
		*range = keep;
		return (i);
	}
	else
		return (-1);
}

// #include <stdio.h>

// int main(void)
// {
// 	int min = 2;
// 	int max = 6;
// 	int *arr;
// 	int size = ft_ultimate_range(&arr, min, max);
// 	int i = -1;
// 	printf("Size: %d\n", size);
// 	while(++i < size)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// }
