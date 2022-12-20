/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:13:18 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/20 09:24:25 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	main(void)
{
	printf("\nProject: " BOLDMAGENTA "Libft" RESET "\n\n");
	printf("-\nPart 1: " BOLDMAGENTA "Libc functions" RESET "\n\n");
	printf(BOLDCYAN "Function" RESET "\t" BOLDCYAN "Tests" RESET "\n\n");
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
	printf("\n");
	printf("-\nPart 2: " BOLDMAGENTA "Additionnal functions" RESET "\n\n");
	printf(BOLDCYAN "Function" RESET "\t" BOLDCYAN "Tests" RESET "\n\n");
	ft_substr_test();
	ft_strjoin_test();
	ft_strtrim_test();
	ft_split_test();
	ft_itoa_test();
	ft_strmapi_test();
	ft_striteri_test();
	ft_putchar_fd_test();
	ft_putstr_fd_test();
	ft_putendl_fd_test();
	ft_putnbr_fd_test();
	printf("\n");
#ifdef BONUS
	printf("-\nPart 3: " BOLDMAGENTA "Bonus" RESET "\n\n");
	printf(BOLDCYAN "Function" RESET "\t" BOLDCYAN "Tests" RESET "\n\n");
	ft_lstnew_test();
	ft_lstadd_front_test();
	ft_lstsize_test();
	ft_lstlast_test();
	ft_lstadd_back_test();
	ft_lstdelone_test();
	ft_lstclear_test();
	ft_lstiter_test();
	ft_lstmap_test();
	printf("\n");
#endif
	return (0);
}
