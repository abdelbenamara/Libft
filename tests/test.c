/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:13:18 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 01:26:37 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	main(void)
{
	printf("\nProject:\t" BOLDMAGENTA " Libft" RESET "\n\n");
	printf(BOLDCYAN "Method" RESET "\t\t\t\t" BOLDCYAN "Tests" RESET "\n");
	printf("-\t\t  ---\t\t-\n");
	ft_isalpha_test();
	ft_isdigit_test();
	ft_isalnum_test();
	ft_isascii_test();
	ft_isprint_test();
	ft_strlen_test();
	ft_memset_test();
	ft_bzero_test();
	ft_memcpy_test();
	ft_memmove_test();
	ft_strlcpy_test();
	ft_strlcat_test();
	ft_toupper_test();
	ft_tolower_test();
	ft_strchr_test();
	ft_strrchr_test();
	ft_strncmp_test();
	ft_memchr_test();
	ft_memcmp_test();
	ft_strnstr_test();
	ft_atoi_test();
	ft_calloc_test();
	ft_strdup_test();
	printf("-\t\t  ---\t\t-\n\n" BOLDMAGENTA "Part 1:" RESET "\t\t" BOLDGREEN "SUCCESS" RESET "\n\n");
	printf(BOLDCYAN "Method" RESET "\t\t\t\t" BOLDCYAN "Tests" RESET "\n");
	printf("-\t\t  ---\t\t-\n");
	ft_substr_test();
	ft_strjoin_test();
	ft_strtrim_test();
	ft_split_test();
	ft_itoa_test();
	ft_strmapi_test();
	ft_striteri_test();
	ft_putchar_fd_test();
	printf("-\t\t  ---\t\t-\n\n" BOLDMAGENTA "Part 2:" RESET "\t\t" BOLDGREEN "SUCCESS" RESET "\n\n");
	return (0);
}
