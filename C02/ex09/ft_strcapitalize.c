/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 23:12:52 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/23 02:36:19 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str);

int	ft_check_char(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (2);
	else if (c >= '0' && c <= '9')
		return (3);
	else
		return (0);
}

char	ft_to_upper(char c)
{
	if (ft_check_char(c) == 2)
		return (c - 32);
	return (c);
}

char	ft_to_lower(char c)
{
	if (ft_check_char(c) == 1)
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	reset;

	reset = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check_char(str[i]))
		{
			if (reset == 1)
				str[i] = ft_to_upper(str[i]);
			else
				str[i] = ft_to_lower(str[i]);
			reset = 0;
		}
		else
			reset = 1;
		i++;
	}
	return (str);
}
