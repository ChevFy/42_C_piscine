/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:01:52 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/26 15:13:27 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}

// #include <stdio.h>

// int main()
// {
//     printf("sqrt of 16 = %d\n" , ft_sqrt(16));
//     printf("sqrt of 32 = %d\n" , ft_sqrt(32));
//     printf("sqrt of 100 = %d\n" , ft_sqrt(100));
//     printf("sqrt of -1 = %d\n" , ft_sqrt(-1));

// }