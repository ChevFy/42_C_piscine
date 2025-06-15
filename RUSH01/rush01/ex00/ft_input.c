/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:37:54 by krijooyc          #+#    #+#             */
/*   Updated: 2025/06/01 23:36:56 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int	count_number(char *str)
// {
// 	int	count;
// 	int	i;

// 	count = 0;
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= '0' && str[i] <= '9')
// 			count++;
// 		i++;
// 	}
// 	return (count);
// }

int	check_number(char c)
{
	if ((c >= '0' && c <= '9') || c == ' ')
		return (1);
	else
		return (0);
}

int	*input_clues(char *str, int *clues)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] >= '0' && str[i
					+ 1] <= '9'))
			return (0);
		if (str[0] == ' ' || (str[i + 1] == '\0' && str[i] == ' '))
			return (0);
		if (str[i] >= '1' && str[i] <= '4')
		{
			clues[j] = str[i] - '0';
			j++;
		}
		if ((str[i] == ' ' && str[i + 1] == ' ') || check_number(str[i]) != 1)
			return (0);
		i++;
	}
	if (j != 16)
		return (0);
	return (clues);
}
