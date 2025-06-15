/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_permutation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:13:01 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/01 23:32:57 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

void	ft_swap(char *x, char *y)
{
	char	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

char	**ft_allocate_permute(char **permute)
{
	int	i;

	i = -1;
	permute = malloc(sizeof(char *) * 24);
	if (permute == NULL)
	{
		free(permute);
		return (NULL);
	}
	while (++i < 24)
	{
		permute[i] = malloc(sizeof(char) * 5);
	}
	return (permute);
}

char	*ft_make_number(int size)
{
	char	*number;
	int		i;
	int		j;

	i = 0;
	j = 1;
	number = malloc(size + 1);
	if (number == NULL)
	{
		free(number);
		return (NULL);
	}
	while (i < size)
	{
		number[i] = j + '0';
		j++;
		i++;
	}
	number[i] = '\0';
	return (number);
}

void	ft_permutation(char *str, char **permute, int l, int *index)
{
	int	i;
	int	r;

	r = ft_strlen(str) - 1;
	if (l == r)
	{
		i = -1;
		while (++i < 4)
			permute[*index][i] = str[i];
		permute[*index][i] = '\0';
		(*index)++;
	}
	else
	{
		i = l;
		while (i <= r)
		{
			ft_swap(&str[l], &str[i]);
			ft_permutation(str, permute, l + 1, index);
			ft_swap(&str[l], &str[i]);
			i++;
		}
	}
}
