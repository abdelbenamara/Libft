# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 18:54:24 by abenamar          #+#    #+#              #
#    Updated: 2022/12/02 23:35:55 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test.out

INCLUDES = ${CURDIR}/..

LIBDIR = ${CURDIR}/..
LIB = ft

SRCS += ft_isalpha_test.c 
SRCS += ft_isdigit_test.c 
SRCS += ft_isalnum_test.c 
SRCS += ft_isascii_test.c 
SRCS += ft_isprint_test.c 
SRCS += ft_strlen_test.c 
SRCS += ft_memset_test.c 
SRCS += ft_bzero_test.c 
SRCS += ft_memcpy_test.c 
SRCS += ft_memmove_test.c 
SRCS += ft_strlcpy_test.c 
SRCS += ft_strlcat_test.c 
SRCS += ft_toupper_test.c 
SRCS += ft_tolower_test.c 
SRCS += ft_strchr_test.c 
SRCS += ft_strrchr_test.c 
SRCS += ft_strncmp_test.c 
SRCS += ft_memchr_test.c 
SRCS += ft_memcmp_test.c
SRCS += ft_strnstr_test.c
SRCS += ft_atoi_test.c
SRCS += ft_calloc_test.c
SRCS += test.c 

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

RM = rm -f

%.o : %.c
	${CC} ${CFLAGS} -g3 -c $< -o $@ -I ${INCLUDES}

${NAME}: libft ${OBJS}
	${CC} ${CFLAGS} -g3 -o ${NAME} ${OBJS} -I ${INCLUDES} -L${LIBDIR} -l${LIB} -lbsd

libft:
	cd ${CURDIR}/.. && ${MAKE}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean all libft
