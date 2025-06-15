/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 19:55:58 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/08 20:18:54 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	check_a(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == 'a' || str[i] == 'A')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int count;
	count = 0;

	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main (void)
// {
// 	char **strs;
//     int lenght = 3;
// 	int	i;

// 	i = 0;
// 	strs = (char **)malloc(sizeof(char *) * 3);
// 	strs[0] = "testarray";
// 	strs[1] = "teAstarrAy";
// 	strs[2] = "12300212";
// 	printf("%d\n", ft_count_if(strs, 3, &check_a));
// } 