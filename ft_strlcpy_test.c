/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:01:23 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:31:00 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strlcpy_test(void)
{
	char	str1[15] = "This is a test";
	char	str2[15] = "This is a test";

	printf(RESET "\nft_strlcpy\t");
	ft_assert(1, ft_strlcpy(str1, "test", 0 * sizeof(char)) == strlcpy(str2, "test", 0 * sizeof(char)));
	ft_assert(2, !strcmp(str1, str2));
	ft_assert(3, ft_strlcpy(str1, "test", 5 * sizeof(char)) == strlcpy(str2, "test", 5 * sizeof(char)));
	ft_assert(4, !strcmp(str1, str2));
	ft_assert(5, ft_strlcpy(str1 + 4, "?", 2 * sizeof(char)) == strlcpy(str2 + 4, "?", 2 * sizeof(char)));
	ft_assert(6, !strcmp(str1, str2));
	ft_assert(7, ft_strlcpy(str1, "This is a test", strlen(str1)) == strlcpy(str2, "This is a test", strlen(str2)));
	ft_assert(8, !strcmp(str1, str2));
	ft_assert(9, ft_strlcpy(str1, "This is a test", 18 * sizeof(char)) == strlcpy(str2, "This is a test", 18 * sizeof(char)));
	ft_assert(10, !strcmp(str1, str2));
	ft_assert(11, ft_strlcpy(str1, str1 + 4, 11 * sizeof(char)) == strlcpy(str2, str2 + 4, 11 * sizeof(char)));
	ft_assert(12, !strcmp(str1, str2));
	ft_assert(13, ft_strlcpy(str1 + 4, str1, 11 * sizeof(char)) == strlcpy(str2 + 4, str2, 11 * sizeof(char)));
	ft_assert(14, !strcmp(str1, str2));
}
