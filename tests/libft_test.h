/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:14:14 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 03:33:04 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include <assert.h>
# include <bsd/string.h>
# include <ctype.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "libft.h"

# define RESET   	"\033[0m"
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_isalpha_test(void);
void	ft_isdigit_test(void);
void	ft_isalnum_test(void);
void	ft_isascii_test(void);
void	ft_isprint_test(void);
void	ft_strlen_test(void);
void	ft_memset_test(void);
void	ft_bzero_test(void);
void	ft_memcpy_test(void);
void	ft_memmove_test(void);
void	ft_strlcpy_test(void);
void	ft_strlcat_test(void);
void	ft_toupper_test(void);
void	ft_tolower_test(void);
void	ft_strchr_test(void);
void	ft_strrchr_test(void);
void	ft_strncmp_test(void);
void	ft_memchr_test(void);
void	ft_memcmp_test(void);
void	ft_strnstr_test(void);
void	ft_atoi_test(void);
void	ft_calloc_test(void);
void	ft_strdup_test(void);

void	ft_substr_test(void);
void	ft_strjoin_test(void);
void	ft_strtrim_test(void);
void	ft_split_test(void);
void	ft_itoa_test(void);
void	ft_strmapi_test(void);
void	ft_striteri_test(void);
void	ft_putchar_fd_test(void);
void	ft_putstr_fd_test(void);

#endif
