/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:31:11 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/29 16:58:00 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size -= 1;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

// #include <stdio.h>

// int main(void)
// {
//     int a[6] = { 3 , 4, 0 ,5, 6, 7 };
//     ft_rev_int_tab(a , 6);

// 	int i = 0;
// 	while( i < 6)
// 	{
// 		printf("%d " , a[i]);
// 		i++;
// 	}
// }
