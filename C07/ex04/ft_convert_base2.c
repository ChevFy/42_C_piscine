/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:23:17 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/07 15:12:58 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0' || base == 0)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] >= 127)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_start_index(char *str, int *ptr_sign)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_sign = sign;
	return (i);
}

int	ft_match_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_loop_sum(int sum, int init, char *str, char *base)
{
	while (ft_match_base(str[init], base) != -1)
	{
		sum = (sum * ft_check_base(base)) + ft_match_base(str[init], base);
		init++;
	}
	return (sum);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sum;
	int	sign;

	sum = 0;
	if (ft_check_base(base) >= 2)
	{
		sum = ft_loop_sum(sum, ft_start_index(str, &sign), str, base);
		return (sum * sign);
	}
	return (0);
}
