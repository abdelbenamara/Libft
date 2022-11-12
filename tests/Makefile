# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 18:54:24 by abenamar          #+#    #+#              #
#    Updated: 2022/11/12 01:35:56 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test.out

INCLUDES = ..

LIBDIR = ..
LIB = ft

SRCS += ft_isalpha_test.c 
SRCS += ft_isdigit_test.c 
SRCS += ft_isalnum_test.c 
SRCS += ft_isascii_test.c 
SRCS += test.c 

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

RM = rm -f

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDES}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${INCLUDES} -L${LIBDIR} -l${LIB}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean all
