/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:52:16 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/07 17:07:48 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lendigit(char *str);

int	ft_power(int nb, int power)
{
	int	i;
	int	k;

	k = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb *= k;
		i++;
	}
	return (nb);
}

int	ft_cmp(char c, char *base)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (ft_lendigit(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	k = 0;
	while (base[k] != c)
		k++;
	return (k);
}

int	ft_lendigit(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '-'
		|| str[i] == '+')
		i++;
	j = 0;
	while (str[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

int	calc_sign(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	k;
	int	sum;
	int	num_base;

	num_base = 0;
	if (ft_cmp('a', base) == 0)
		return (0);
	while (base[num_base] != '\0')
		num_base++;
	sign = calc_sign(str);
	i = 0;
	sum = 0;
	k = ft_lendigit(str);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '-'
		|| str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		sum = sum + ft_power(num_base, --k) * ft_cmp(str[i], base);
		i++;
	}
	return (sum * sign);
}

#include <stdio.h>

int	main(void)
{
	char *str = "🔴🔴";
	char *base = "0️⃣1️⃣2️⃣3️⃣4️⃣5️⃣6️7️8️9️🔴🟠🟡🟢🔵🟣";
	printf("%d", ft_atoi_base(str, base));
}