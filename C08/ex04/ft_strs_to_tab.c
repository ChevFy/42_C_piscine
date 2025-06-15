/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:25:48 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/05 17:17:51 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*keep;

	i = -1;
	keep = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	while (++i < ac)
	{
		keep[i].str = ft_strdup(av[i]);
		keep[i].copy = ft_strdup(av[i]);
		keep[i].size = ft_strlen(av[i]);
		if (keep[i].str == NULL || keep[i].copy == NULL)
			return (NULL);
	}
	keep[++i].str = NULL;
	return (keep);
}
