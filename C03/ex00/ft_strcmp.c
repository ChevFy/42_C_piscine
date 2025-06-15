/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:43:18 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/24 18:04:07 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (0);
	if (*s1 == *s2)
	{
		return (ft_strcmp(++s1, ++s2));
	}
	else
		return (*s1 - *s2);
}

// int	main(void)
// {
// 	char	*s1 = "word";
// 	char	*s2 = "Word";

// 	printf("Or: %d\n", strcmp(s1, s2));
// 	printf("My: %d\n", ft_strcmp(s1, s2));
// } 