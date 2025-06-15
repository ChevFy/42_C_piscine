/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 15:20:49 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/07 17:03:04 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	int			i;
	char		keep[32];
	long int	n;

	i = 0;
	n = nbr;
	len = ft_strlen(base);
	if (!(ft_check_base(base)))
		return ;
	if (n == 0)
		ft_putchar(base[0]);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	while (n > 0)
	{
		keep[i] = base[n % len];
		n = n / len;
		i++;
	}
	while (--i >= 0)
		ft_putchar(keep[i]);
}

int	main(void)
{
	int n = 42;
	char *hex = "0️⃣1️⃣2️⃣3️⃣4️⃣5️⃣6️⃣7️⃣8️⃣9️⃣🔴🟠🟡🟢🔵🟣";
	char *bi  = "01";
	char *dec = "0123456789";
	char *oct = "01234567";

	ft_putnbr_base(n, hex);
	// write(1, "\n", 1);
	// ft_putnbr_base(n, bi);
	// write(1, "\n", 1);
	// ft_putnbr_base(n, dec);
	// write(1, "\n", 1);
	// ft_putnbr_base(n, oct);

	return (0);
}
