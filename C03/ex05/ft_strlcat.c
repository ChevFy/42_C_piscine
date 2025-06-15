/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 14:23:49 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/24 15:50:20 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;
	unsigned int	d;
	unsigned int	sum;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size > d)
	{
		sum = d + s;
	}
	else
	{
		sum = s + size;
	}
	while (src[i] != '\0' && d + 1 < size)
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[d] = '\0';
	return (sum);
}

// int	main(void)
// {
// 	char str1[6] = "Hi ";
// 	char *str2 = "World";

// 	printf("before = %s\n", str1);
// 	printf("%d\n", ft_strlcat(str1, str2, 6));
// 	printf("after = %s\n", str1);
// }