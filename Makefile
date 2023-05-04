# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 18:54:49 by abenamar          #+#    #+#              #
#    Updated: 2023/05/04 22:08:41 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

INCLUDES := -I $(CURDIR)

# **************************************************************************** #
#                                                                              #
#                                    libft                                     #
#                                                                              #
# **************************************************************************** #

SRCS := ft_isalpha.c 
SRCS += ft_isdigit.c 
SRCS += ft_isalnum.c 
SRCS += ft_isascii.c 
SRCS += ft_isprint.c 
SRCS += ft_strlen.c
SRCS += ft_memset.c
SRCS += ft_bzero.c
SRCS += ft_memcpy.c
SRCS += ft_memmove.c
SRCS += ft_strlcpy.c
SRCS += ft_strlcat.c
SRCS += ft_toupper.c
SRCS += ft_tolower.c
SRCS += ft_strchr.c
SRCS += ft_strrchr.c
SRCS += ft_strncmp.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_strnstr.c
SRCS += ft_atoi.c
SRCS += ft_calloc.c
SRCS += ft_strdup.c

SRCS += ft_substr.c
SRCS += ft_strjoin.c
SRCS += ft_strtrim.c
SRCS += ft_split.c
SRCS += ft_itoa.c
SRCS += ft_strmapi.c
SRCS += ft_striteri.c
SRCS += ft_putchar_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c

SRCS += ft_lstnew.c
SRCS += ft_lstadd_front.c
SRCS += ft_lstsize.c
SRCS += ft_lstlast.c
SRCS += ft_lstadd_back.c
SRCS += ft_lstdelone.c
SRCS += ft_lstclear.c
SRCS += ft_lstiter.c
SRCS += ft_lstmap.c

# **************************************************************************** #
#                                                                              #
#                                get_next_line                                 #
#                                                                              #
# **************************************************************************** #

SRCS += get_next_line.c

# **************************************************************************** #
#                                                                              #
#                                  ft_printf                                   #
#                                                                              #
# **************************************************************************** #

SRCS += ft_uitoa_base.c
SRCS += ft_uiptrtoa_base.c

SRCS += libarg/ft_is_flag.c
SRCS += libarg/ft_is_specifier.c
SRCS += libarg/ft_max_width.c
SRCS += libarg/ft_min_width.c
SRCS += libarg/ft_parse_specifications.c
SRCS += libarg/ft_adjust_width.c
SRCS += libarg/ft_vdint_conversion.c
SRCS += libarg/ft_vdptr_conversion.c
SRCS += libarg/ft_vdstr_conversion.c
SRCS += libarg/ft_vduint_conversion.c
SRCS += libarg/ft_vdconvert.c
SRCS += libarg/ft_vdprintf.c
SRCS += libarg/ft_vprintf.c

SRCS += ft_dprintf.c
SRCS += ft_printf.c

OBJS := $(SRCS:.c=.o)

CC := cc

CFLAGS := -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

AR := ar

AROPTIONS := rcs

RM := rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): $(OBJS)
	$(AR) $(AROPTIONS) $(NAME) $(OBJS)

bonus: $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all bonus
