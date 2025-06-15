/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:24:42 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/22 21:33:59 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
			&& str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
//     printf("%d" , ft_str_is_alpha(" "));
// }