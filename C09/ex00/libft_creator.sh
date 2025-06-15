# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npongtam <npongtam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/05 17:30:02 by npongtam          #+#    #+#              #
#    Updated: 2025/06/05 17:39:41 by npongtam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

cc -c -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c 
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 

