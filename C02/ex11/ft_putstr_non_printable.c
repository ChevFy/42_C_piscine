/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:13:39 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/29 20:58:32 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hex(int nb_dec)
{
	char	*hex;
	char	str[2];

	hex = "0123456789abcdef";
	ft_putchar('\\');
	str[1] = hex[nb_dec % 16];
	nb_dec /= 16;
	str[0] = hex[nb_dec % 16];
	ft_putchar(str[0]);
	ft_putchar(str[1]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while ((str[++i] != '\0'))
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			ft_dec_to_hex(str[i]);
			continue ;
		}
		write(1, &str[i], 1);
	}
}

// int	main(void)
// {

// 	ft_putstr_non_printable("wow\vw");
// }