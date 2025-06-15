/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 19:24:21 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/08 19:45:04 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// int	ft_plusone(int n)
// {
// 	return (n + 1);
// }

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*keep;
	int	i;

	keep = (int *)malloc(sizeof(int) * length);
	if (keep == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		keep[i] = (*f)(tab[i]);
		i++;
	}
	return (keep);
}
// #include <stdio.h>
// int main()
// {
//     int tab[5] = {10 , 20 , 30 , 40 , 50};
//     int *keep;
//     keep = ft_map(tab , 5 , &ft_plusone);
//     for(int i = 0 ;  i < 5 ; i++)
//     {
//         printf("%d " , keep[i]);
//     }
// }