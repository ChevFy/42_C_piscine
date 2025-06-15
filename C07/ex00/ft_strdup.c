/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 22:58:20 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/27 20:33:22 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc((len + 1) * sizeof(char));
	ft_strcpy(dest, src);
	return (dest);
}

// I hope these links can help you to complete C07
// And understand how the Malloc work.
// Keep fighting and Go to Cadet Togecther!!!
//  In english
// Malloc : https://www.youtube.com/watch?v=Vch7_YeGKH4
// Free : https://www.youtube.com/watch?v=qG0wUzuBI_A
// In Thai
// Malloc and Free : https://www.youtube.com/watch?v=hi17q1a0KU0&t=213s  