# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izouiten <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/01 06:42:43 by izouiten          #+#    #+#              #
#    Updated: 2019/11/25 07:09:24 by izouiten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC = fractol.h
mlx1 =  mlx/libmlx.a -lz -framework OpenGL -framework AppKit libft/libft.a
OBJ = srcs/fractol.o srcs/hook.o srcs/mandelbrot.o srcs/julia.o srcs/tools.o srcs/burningship.o	srcs/menu.o\
	  srcs/burningjulia.o srcs/multibrot.o srcs/tricorn.o
CFLAGS = -Wall -Werror -Wextra 
CC = gcc
NAME = fractol

all : $(NAME)
%.o : %.c $(INC)
	$(CC) $(FLAGS) -c -o $@ $<
$(NAME): $(OBJ)
	@make -C libft
	@make -C mlx
	@$(CC) $(OBJ) $(mlx1) -o $(NAME) -I $(INC)
	@echo "Compilation of fractol ===> \033[1;32mOK\033[m"

clean :
	@rm -f $(OBJ)
	@echo "objects removed ===> \033[33mremoved\033[m"
fclean : clean
	@rm -f $(NAME)
	@echo "binary file     ===> \033[31mremoved\033[m"
re : fclean all