/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:04:58 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/26 22:44:36 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}

// I thinks these can help you to pass C06 
// Keep figting and go to Cadet together!!!!!

// In english
// Arguments: https://www.youtube.com/watch?v=bAHcxPvOmBU
// Bidimensional Arrays: https://www.youtube.com/watch?v=J1aQ9JN4vZY

// In thai
// Arguments : https://www.youtube.com/watch?v=qwVKI3N55cE
// Bidimentional Arrays : https://www.youtube.com/watch?v=E0sho77MaXI