/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 13:41:44 by npongtam          #+#    #+#             */
/*   Updated: 2025/06/07 13:42:30 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = -1;
	while (sep[++i] != '\0')
	{
		if (c == sep[i])
			return (1);
	}
	return (0);
}

int	count_word(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], sep) != 1)
		{
			count++;
			while (str[i] != '\0' && !is_sep(str[i], sep))
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_strlen_song_cheng(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i], sep))
		i++;
	return (i);
}

char	**ft_split_word(char *str, char *sep, char **keep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (!is_sep(str[i], sep))
		{
			j = 0;
			while (str[i] && !is_sep(str[i], sep))
				keep[k][j++] = str[i++];
			keep[k][j] = '\0';
			k++;
		}
		else
			i++;
	}
	return (keep);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	*start;
	int		i;

	start = str;
	i = 0;
	result = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (result == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (!is_sep(*str, charset))
		{
			result[i] = malloc(sizeof(char) * (ft_strlen_song_cheng(str,
							charset) + 1));
			if (result[i] == NULL)
				return (NULL);
			i++;
			str += ft_strlen_song_cheng(str, charset);
		}
		else
			str++;
	}
	result[i] = NULL;
	return (ft_split_word(start, charset, result));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Chevfy,wow,,,amazing,kuy ,sdfds";
// 	char sep[] = ", ";
// 	char **result = ft_split(str, sep);
// 	int i = 0;

// 	while (result[i])
// 	{
// 		printf("[%s]\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }