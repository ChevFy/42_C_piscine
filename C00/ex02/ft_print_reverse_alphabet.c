/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:52:51 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/21 13:07:51 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		start;
	char	alphabet;

	start = 122;
	while (start >= 97)
	{
		alphabet = start;
		write(1, &alphabet, 1);
		start--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }
