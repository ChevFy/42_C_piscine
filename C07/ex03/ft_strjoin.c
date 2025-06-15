/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:20:38 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/07 15:13:14 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_get_sum_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (size <= 0)
		return (0);
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (size - 1) * ft_strlen(sep);
	return (total);
}

char	*ft_create_new_string(int size, char **strs, char *sep)
{
	int		total;
	char	*new_arr;

	total = ft_get_sum_len(size, strs, sep);
	new_arr = (char *)malloc(total + 1);
	if (size <= 0 && new_arr)
		new_arr[0] = '\0';
	return (new_arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	res = ft_create_new_string(size, strs, sep);
	if (res == NULL || size <= 0)
		return (res);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			res[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				res[k++] = sep[j++];
		}
		i++;
	}
	res[k] = '\0';
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str[] = {"hello", "wow", "yes"};
// 	char *sep = "--";
// 	int size = 3;
// 	char *all = ft_strjoin(size, str, sep);

// 	printf("%s\n", all);
// }