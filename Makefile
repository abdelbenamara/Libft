# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 18:54:24 by abenamar          #+#    #+#              #
#    Updated: 2023/01/08 03:14:31 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := test.out

LIBFT := libft.a
LIBFTSO := libft.so

INCLUDES := -I $(CURDIR)
INCLUDES += -I $(CURDIR)/..

LDFLAGS := -L$(CURDIR)/..

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

CC := cc

CFLAGS := -g3
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

ifneq (, $(findstring bonus, $(MAKECMDGOALS)))
SRCS += ft_lstnew_test.c
SRCS += ft_lstadd_front_test.c
SRCS += ft_lstsize_test.c
SRCS += ft_lstlast_test.c
SRCS += ft_lstadd_back_test.c
SRCS += ft_lstdelone_test.c
SRCS += ft_lstclear_test.c
SRCS += ft_lstiter_test.c
SRCS += ft_lstmap_test.c

CFLAGS += -DBONUS
endif

LIBFTSRCS := $(patsubst %,$(CURDIR)/../%,$(SRCS:_test.c=.c))

SRCS += test.c 

RM := rm -f

OBJS := $(SRCS:.c=.o)

LIBFTOBJS := $(LIBFTSRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): .libft $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES) $(LDFLAGS) $(LDLIBS)

.libft:
	@echo "\033[0;36m######################################## make libft ########################################\033[0m"
	@$(MAKE) -C $(CURDIR)/.. $(findstring bonus, $(MAKECMDGOALS))
	@ln -fs $(CURDIR)/../$(LIBFT) $(LIBFT)
	@$(CC) $(CFLAGS) -c test.c -o test.o $(INCLUDES)

test: $(NAME)
	@echo "\033[0;36m########################################### test ###########################################\033[0m"
	@./$(NAME)

valgrind-test: $(NAME)
	@echo "\033[0;36m#################################### test with valgrind ####################################\033[0m"
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

norm:
	@echo "\033[0;36m######################################## norminette ########################################\033[0m"
	@cd $(CURDIR)/.. && norminette $$(ls | grep "\.c\|\.h")

so:
	@$(CC) -nostartfiles -fPIC $(CFLAGS) $(LIBFTSRCS)
	@gcc -nostartfiles -shared -o $(LIBFTSO) $(LIBFTOBJS)

community-tests:
	@if [ ! -d "Libftest" ] || [ -z "$$(ls -A Libftest)" ]; then \
		git submodule update --init Libftest; \
		bash Libftest/grademe.sh; \
		sed -i 's/^PATH_LIBFT=.\+$$/PATH_LIBFT=$$(dirname "$$(realpath $$0)")\/..\/../' Libftest/my_config.sh; \
		sed -i "s/^\(\t'ft_memccpy'\t\\\\\)$$/#\1/" Libftest/srcs/variables/functions/part_1.sh; \
		sed -i 's/^\(\tmake --no-print-directory -C $${PATH_LIBFT} clean > \/dev\/null\)$$/#\1/' Libftest/srcs/print.sh; \
		sed -i 's/^\(clear\)$$/#\1/' Libftest/grademe.sh; \
	fi
	@if [ ! -d "libft-unit-test" ] || [ -z "$$(ls -A libft-unit-test)" ]; then \
		git submodule update --init libft-unit-test; \
		sed -i 's/^LIBFTDIR\t=\t.\+$$/LIBFTDIR\t=\t$$(CURDIR)\/../' libft-unit-test/Makefile; \
		sed -i 's/^\(\t@make -C \$$(LIBFTDIR) \)\(so\)$$/\1bonus \2/' libft-unit-test/Makefile; \
	fi
	@echo "\033[0;36m##################################### jtoty : Libftest #####################################\033[0m"
	@echo "n" | bash Libftest/grademe.sh
	@echo "\033[0;36m################################ alelievr : libft-unit-test ################################\033[0m"
	@$(MAKE) -C libft-unit-test/ f

bonus: $(NAME)

all: norm valgrind-test community-tests

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)
	$(RM) $(LIBFTSO)
	$(RM) *.out

re: fclean all

.PHONY: re fclean clean all bonus community-tests so norm valgrind-test test
