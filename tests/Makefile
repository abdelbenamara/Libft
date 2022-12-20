# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 18:54:24 by abenamar          #+#    #+#              #
#    Updated: 2022/12/20 09:22:23 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := test.out

INCLUDES := -I ${CURDIR}
INCLUDES += -I ${CURDIR}/..

LDFLAGS := -L${CURDIR}/..

LDLIBS := -lft
LDLIBS += -lbsd

SRCS := ft_isalpha_test.c 
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
SRCS += ft_strdup_test.c

SRCS += ft_substr_test.c
SRCS += ft_strjoin_test.c
SRCS += ft_strtrim_test.c
SRCS += ft_split_test.c
SRCS += ft_itoa_test.c
SRCS += ft_strmapi_test.c
SRCS += ft_striteri_test.c
SRCS += ft_putchar_fd_test.c
SRCS += ft_putstr_fd_test.c
SRCS += ft_putendl_fd_test.c
SRCS += ft_putnbr_fd_test.c

ifneq (, $(findstring bonus, ${MAKECMDGOALS}))
BONUS := 1
endif

ifdef BONUS
SRCS += ft_lstnew_bonus_test.c
SRCS += ft_lstadd_front_bonus_test.c
SRCS += ft_lstsize_bonus_test.c
SRCS += ft_lstlast_bonus_test.c
SRCS += ft_lstadd_back_bonus_test.c
SRCS += ft_lstdelone_bonus_test.c
SRCS += ft_lstclear_bonus_test.c
SRCS += ft_lstiter_bonus_test.c
SRCS += ft_lstmap_bonus_test.c
endif

SRCS += test.c 

CC := gcc

CFLAGS := -g3
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

ifdef BONUS
CFLAGS += -DBONUS
endif

RM := rm -f

OBJS := ${SRCS:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ ${INCLUDES}

${NAME}: .libft ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${INCLUDES} ${LDFLAGS} ${LDLIBS}

bonus: ${NAME}

.libft:
	cd ${CURDIR}/.. && ${MAKE} ${MAKECMDGOALS}
	${CC} ${CFLAGS} -c test.c -o test.o ${INCLUDES}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean all bonus
