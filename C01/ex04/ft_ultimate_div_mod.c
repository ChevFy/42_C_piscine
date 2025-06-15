/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:29:07 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/22 15:53:06 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int a;
// 	int b;

// 	a = 5;
// 	b = 2;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return (0);
// }