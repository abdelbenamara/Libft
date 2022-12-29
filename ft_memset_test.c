/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:42:34 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:03:37 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memset_test(void)
{
	char	str1[18] = "This is a test";
	char	str2[18] = "This is a test";

	printf(RESET "\nft_memset\t");
	ft_assert(1, !memcmp(ft_memset(str1 + 2, '.', 0 * sizeof(char)), memset(str2 + 2, '.', 0 * sizeof(char)), 0));
	ft_assert(2, !memcmp(str1, str2, 0));
	ft_assert(3, !memcmp(ft_memset(str1 + 2, '.', 8 * sizeof(char)), memset(str2 + 2, '.', 8 * sizeof(char)), 8));
	ft_assert(4, !memcmp(str1, str2, 8));
	ft_assert(5, !memcmp(ft_memset(str1 + 2, 216, 8 * sizeof(char)), memset(str2 + 2, 216, 8 * sizeof(char)), 8));
	ft_assert(6, !memcmp(str1, str2, 8));
	ft_assert(7, !memcmp(ft_memset(str1, '*', strlen(str1)), memset(str2, '*', strlen(str2)), 15));
	ft_assert(8, !memcmp(str1, str2, 15));
	ft_assert(9, !memcmp(ft_memset(str1, '*', 18), memset(str2, '*', 18), 18));
	ft_assert(10, !memcmp(str1, str2, 18));
}
