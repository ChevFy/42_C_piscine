/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:18:23 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/05 17:16:06 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (nb > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		i++;
	}
}

// #include "ft_stock_str.h"
// #include <stdlib.h>

// char	*ft_strcpy(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// char	*ft_strdup(char *src)
// {
// 	int		len;
// 	char	*dest;

// 	len = ft_strlen(src);
// 	dest = (char *)malloc((len + 1) * sizeof(char));
// 	ft_strcpy(dest, src);
// 	return (dest);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	int i;
// 	t_stock_str *keep;
// 	i = 0;
// 	keep = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
// 	while (++i < ac)
// 	{
// 		keep[i].str = ft_strdup(av[i]);
// 		keep[i].copy = ft_strdup(av[i]);
// 		keep[i].size = ft_strlen(av[i]);

// 		if(keep[i].str == NULL || keep[i].copy == NULL)
// 				return (NULL);
// 	}
// 	keep[++i].str = NULL;
// 	return (keep);
// }
