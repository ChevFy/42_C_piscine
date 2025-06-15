/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:22:18 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/22 15:46:08 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int		main(void)
// {
// 	int a = 21;
// 	int b = 10;
// 	int v1 = 0;
// 	int v2 = 0;
// 	int *ptr1 = &v1;
// 	int *ptr2 = &v2;
// 	ft_div_mod(a, b, ptr1, ptr2);
// 	printf("div = %d, mod = %d" , *ptr1 , *ptr2);
// }
