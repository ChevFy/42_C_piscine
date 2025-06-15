/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 20:24:13 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/08 20:30:18 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_strcmp_outlaw(int a, int b)
// {
// 	return (a - b);
// }

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int        main(void)
// {
//     int	tab1[3] = {1, 3, 2};
//     int	tab2[3] = {1, 2, 3};
//     int            length = 3;

//     printf("%d\n", ft_is_sort(tab1, length, &ft_strcmp_outlaw));
//     printf("%d\n", ft_is_sort(tab2, length, &ft_strcmp_outlaw));
// }