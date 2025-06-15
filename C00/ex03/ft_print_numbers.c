/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:58:59 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/21 16:29:55 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	start;

	start = '0';
	while (start <= '9')
	{
		write(1, &start, 1);
		start++;
	}
}

// int main(void)
// {
// 	ft_print_number();
// }
