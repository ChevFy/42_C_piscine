/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:18:52 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/07 15:13:43 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_check_base(char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_get_arr_size(int nbr, char *base)
{
	long int	n;
	int			i;
	int			base_size;

	n = nbr;
	base_size = ft_strlen(base);
	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= base_size;
		i++;
	}
	return (i);
}

char	*ft_create_new_string(int nbr, char *base)
{
	int		len;
	int		i;
	char	*res;

	i = 0;
	len = ft_get_arr_size(nbr, base);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (nbr == 0)
	{
		res[0] = base[0];
		res[1] = '\0';
		return (res);
	}
	while (i < len)
	{
		res[i] = base[0];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_putnbr_base(char *arr, int nbr, char *base_to)
{
	int			arr_size;
	int			base_size;
	long int	n;

	arr_size = ft_get_arr_size(nbr, base_to) - 1;
	base_size = ft_strlen(base_to);
	n = nbr;
	if (n < 0)
	{
		arr[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		arr[arr_size] = base_to[n % base_size];
		n /= base_size;
		arr_size--;
	}
	return (arr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base10nbr;
	char	*arr;

	arr = NULL;
	if (!ft_check_base(base_from) || !ft_check_base(base_to) || nbr == NULL)
		return (arr);
	base10nbr = ft_atoi_base(nbr, base_from);
	arr = ft_create_new_string(base10nbr, base_to);
	arr = ft_putnbr_base(arr, base10nbr, base_to);
	return (arr);
}

// #include <stdio.h>

// int main()
// {
// 	char *result;
//     result = ft_convert_base("-42", "0123456789" , "01");
//     printf("wow = %s" , result);
// }