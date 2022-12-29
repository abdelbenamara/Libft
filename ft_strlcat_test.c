/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:26:00 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:32:09 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strlcat_test(void)
{
	char	str1[29] = "This is a test";
	char	str2[29] = "This is a test";

	printf(RESET "\nft_strlcat\t");
	ft_assert(1, ft_strlcat(str1, "test", 0 * sizeof(char)) == strlcat(str2, "test", 0 * sizeof(char)));
	ft_assert(2, !strcmp(str1, str2));
	ft_assert(3, ft_strlcat(str1, "test", 5 * sizeof(char)) == strlcat(str2, "test", 5 * sizeof(char)));
	ft_assert(4, !strcmp(str1, str2));
	ft_assert(5, ft_strlcat(str1 + 4, "?!", 11 * sizeof(char)) == strlcat(str2 + 4, "?!", 11 * sizeof(char)));
	ft_assert(6, !strcmp(str1, str2));
	ft_assert(7, ft_strlcat(str1, "This is a test", strlen(str1) * 2 + 1) == strlcat(str2, "This is a test", strlen(str2) * 2 + 1));
	ft_assert(8, !strcmp(str1, str2));
	str1[14] = '\0';
	str2[14] = '\0';
	ft_assert(9, ft_strlcat(str1, "This is another test", 29 * sizeof(char)) == strlcat(str2, "This is another test", 29 * sizeof(char)));
	ft_assert(10, !strcmp(str1, str2));
	str1[14] = '\0';
	str2[14] = '\0';
	ft_assert(11, ft_strlcat(str1 + 7, str1, 22 * sizeof(char)) == strlcat(str2 + 7, str2, 22 * sizeof(char)));
	ft_assert(12, !strcmp(str1, str2));
	str1[14] = '\0';
	str2[14] = '\0';
	ft_assert(13, ft_strlcat(str1, str1 + 7, 29 * sizeof(char)) == strlcat(str2, str2 + 7, 29 * sizeof(char)));
	ft_assert(14, !strcmp(str1, str2));
}
