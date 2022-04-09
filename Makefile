# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 18:36:56 by olakhdar          #+#    #+#              #
#    Updated: 2022/04/08 21:33:10 by olakhdar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS = checker

CC = gcc

FLAGS =	-Wall -Werror -Wextra 

FILES = ./mandatory/push_swap.c ./mandatory/lists.c ./mandatory/ft_atoi.c ./mandatory/instructions1.c ./mandatory/instructions2.c \
		./mandatory/instructions3.c ./mandatory/push_swap_utils.c ./mandatory/sort3.c ./mandatory/sort5.c ./mandatory/sortmany.c  \
		
BFILES = ./bonus/lists.c ./bonus/ft_atoi.c ./bonus/instructions1.c ./bonus/instructions2.c ./bonus/instructions3.c \
		./bonus/checker.c ./bonus/get_next_line.c ./bonus/checker_utils.c  \
		./bonus/get_next_line_utils.c ./bonus/checksort.c \

all: $(NAME)

bonus: $(BONUS)

$(NAME):
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

$(BONUS):
	$(CC) $(FLAGS) $(BFILES) -o $(BONUS)
	
clean:
	rm -f $(NAME) $(BONUS)

fclean: clean

re: fclean all