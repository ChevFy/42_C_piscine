/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:56:51 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/21 13:06:15 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		start;
	char	alphabet;

	start = 97;
	while (start < 123)
	{
		alphabet = start;
		write(1, &alphabet, 1);
		start++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }