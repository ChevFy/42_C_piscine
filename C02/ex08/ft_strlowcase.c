/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 23:08:07 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/22 23:10:10 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char arr[10] = "Chevfy";
// 	printf("%s", ft_strlowcase(arr));
// }
