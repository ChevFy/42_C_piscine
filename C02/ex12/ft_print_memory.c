/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:21:11 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/30 01:44:32 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_addr_hex(unsigned long nb)
{
	char	*hex;
	char	keep[17];
	int		i;
	int		j;
	int		k;

	hex = "0123456789abcdef";
	k = -1;
	while (++k < 16)
		keep[k] = '0';
	i = 0;
	while (nb > 0)
	{
		keep[i] = hex[nb % 16];
		nb /= 16;
		i++;
	}
	j = 16;
	while (j >= 0)
	{
		ft_putchar(keep[j]);
		j--;
	}
	ft_putchar(':');
}

void	ft_print_hello(unsigned char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if ((addr[i] >= 33 && addr[i] <= 126) || addr[i] == ' ')
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	ft_print_middle(unsigned char *addr, unsigned int size)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (addr[i] != '\0')
	{
	    if (i < size)
	    {
            ft_putchar(hex[(addr[i] / 16) % 16]);
            ft_putchar(hex[addr[i] % 16]);
	    }else
	        ft_putchar(' ');
		if (i % 2 == 1 && i != (int)size - 1)
			ft_putchar(' ');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	addr_dec;

	addr_dec = (unsigned long)addr;
	ft_print_addr_hex(addr_dec);
	ft_putchar(' ');
	ft_print_middle(addr, size);
	ft_putchar(' ');
	ft_print_hello(addr, size);
	return (addr);
}

int	main(void)
{
	char			*str;
	unsigned long	address;

	str = "\t\nlol\tlol\v \n\0";
	address = (unsigned long)str;
	ft_print_memory(str, 12);
}


// test 1  : Bonjour les amin
// me      : 000055611bf79015: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
// console : 000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin

// test 2 : ches\t\n\tc\t est fo
// me      : 0000562196b70015: 6368 6573 090a 0963 0920 6573 7420 666f ches...c. est fo   
// console : 000000010a161f50: 6368 6573 090a 0963 0920 6573 7420 666f ches...c. est fo


// 000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .
// 00005598ea71f015: 090a 6c6f 6c09 6c6f 6c0b 200a ..lol.lol. .%    