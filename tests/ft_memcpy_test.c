/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:29:09 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:16:48 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memcpy_test(void)
{
	char	str1[18] = "This is a test";
	char	str2[18] = "This is a test";

	printf(RESET "\nft_memcpy\t");
	ft_assert(1, !memcmp(ft_memcpy(str1, "test", 0 * sizeof(char)), memcpy(str2, "test", 0 * sizeof(char)), 15));
	ft_assert(2, !memcmp(str1, str2, 15));
	ft_assert(3, !memcmp(ft_memcpy(str1, "test", 4 * sizeof(char)), memcpy(str2, "test", 4 * sizeof(char)), 15));
	ft_assert(4, !memcmp(str1, str2, 15));
	ft_assert(5, !memcmp(ft_memcpy(str1 + 8, "Ø", 1 * sizeof(char)), memcpy(str2 + 8, "Ø", 1 * sizeof(char)), 7));
	ft_assert(6, !memcmp(str1, str2, 15));
	ft_assert(7, !memcmp(ft_memcpy(str1, "This is a test", strlen(str1)), memcpy(str2, "This is a test", strlen(str2)), 15));
	ft_assert(8, !memcmp(str1, str2, 15));
	ft_assert(9, !memcmp(ft_memcpy(str1, "This is a test", strlen(str1) + 2), memcpy(str2, "This is a test", strlen(str2) + 2), 18));
	ft_assert(10, !memcmp(str1, str2, 18));
}
