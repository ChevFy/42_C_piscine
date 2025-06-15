/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:43:22 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/01 23:34:53 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		**ft_allocate_grids(int **grids);
int		*ft_allocate_clues(int *clues);
void	ft_print_output(int **grids);
void	*ft_yud_sai(int **grids);
int		ft_solve(int row, int **grid, int *clue, char **permute);
char	**ft_allocate_permute(char **permute);
void	ft_permutation(char *str, char **permute, int l, int *index);
int		free_all(int **grids, int *clues, char **permute, char *number);
void	*input_clues(char *str, int *clues);
int		count_number(char *str);
char	*ft_make_number(int size);

int	gpc(int argc, char **argv, int index)
{
	int		**grids;
	char	**permute;
	int		*clues;
	char	*number;

	grids = NULL;
	permute = NULL;
	clues = NULL;
	number = ft_make_number(4);
	grids = ft_allocate_grids(grids);
	permute = ft_allocate_permute(permute);
	clues = ft_allocate_clues(clues);
	if (number == NULL || grids == NULL || clues == NULL || number == NULL)
		return (0);
	if (input_clues(argv[argc - 1], clues) == 0)
		return (0);
	else
	{
		ft_permutation(number, permute, 0, &index);
		if (ft_solve(0, grids, clues, permute) == 1)
			ft_print_output(grids);
		else
			return (0);
	}
	return (free_all(grids, clues, permute, number));
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(2, "Error\n", 6));
	if (gpc(argc, argv, 0) == 0)
		return (write(2, "Error\n", 6));
	return (0);
}
