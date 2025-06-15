/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:06:46 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/22 15:30:24 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	k;

	k = *a;
	*a = *b;
	*b = k;
}

// int		main(void)
// {
// 	int a = 10;
// 	int b = 20;
// 	int *ptr1 = &a;
// 	int *ptr2 = &b;
// 	printf("%d %d\n" , *ptr1 , *ptr2 );
// 	ft_swap(ptr1 , ptr2);
// 	printf("%d %d" , *ptr1 , *ptr2);
// }
