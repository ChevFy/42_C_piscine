/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate_memory.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:39:31 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/01 23:32:59 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_grid_i(int **grids)
{
	int	i;

	i = -1;
	while (++i < 4)
		free(grids[i]);
}

int	**ft_allocate_grids(int **grids)
{
	int	i;
	int	j;

	grids = malloc(sizeof(int *) * 4);
	if (grids == NULL)
		return (NULL);
	i = -1;
	while (++i < 4)
	{
		grids[i] = malloc(sizeof(int) * 4);
		if (grids[i] == NULL)
		{
			free_grid_i(grids);
			free(grids);
			return (NULL);
		}
		j = -1;
		while (++j < 4)
			grids[i][j] = 0;
	}
	return (grids);
}

int	*ft_allocate_clues(int *clues)
{
	int	i;

	clues = malloc(sizeof(int) * 16);
	if (clues == NULL)
	{
		free(clues);
		return (NULL);
	}
	i = -1;
	while (++i < 16)
		clues[i] = 0;
	return (clues);
}

// char    *ft_allocate_number(char *str , int size)
// {
// 	int i;
// 	int j;
// 	i = 0;
// 	j = 1;
// 	str = malloc(sizeof(char) * (size + 1));
// 	while( i < size)
// 	{
// 		str[i] = j ;
// 		printf("%d" , str[i]);
// 		i++;
// 		j++;
// 	}
// 	str[i] = '\0';

// 	return (str);

// }

int	free_all(int **grids, int *clues, char **permute, char *number)
{
	int	i;

	i = -1;
	while (++i < 4)
		free(grids[i]);
	free(grids);
	free(clues);
	i = -1;
	while (++i < 4)
		free(permute[i]);
	free(permute);
	free(number);
	return (1);
}
