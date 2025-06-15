/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 10:24:03 by npongtam          #+#    #+#             */
/*   Updated: 2025/05/28 01:08:12 by npongtam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// I think these links can help you to pass C04
// Let's go to CADET !!!!!!!
// Atoi: https://www.youtube.com/watch?v=QyDE7cPycnU&t=15s
// Bases conversion: https://www.youtube.com/watch?v=FFDMzbrEXaE&t=463s
