/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_other.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:43:15 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/01 23:33:12 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_iterative_factorial(int nb)
// {
// 	int	result;

// 	result = 1;
// 	if (nb < 0)
// 		return (0);
// 	if (nb == 1)
// 		return (1);
// 	while (nb > 0)
// 	{
// 		result *= nb;
// 		nb--;
// 	}
// 	return (result);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
