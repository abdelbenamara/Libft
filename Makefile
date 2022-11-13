# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 18:54:49 by abenamar          #+#    #+#              #
#    Updated: 2022/11/13 00:48:22 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS += ft_isalpha.c 
SRCS += ft_isdigit.c 
SRCS += ft_isalnum.c 
SRCS += ft_isascii.c 
SRCS += ft_isprint.c 
SRCS += ft_strlen.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

AR = ar

AROPTIONS = rcs

RM = rm -f

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${AR} ${AROPTIONS} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean all
