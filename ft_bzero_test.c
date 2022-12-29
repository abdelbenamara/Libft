/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:33:21 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:10:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_bzero_test(void)
{
	char	str1[18] = "This is a test";
	char	str2[18] = "This is a test";

	printf(RESET "\nft_bzero\t");
	ft_bzero(str1 + 15, 0 * sizeof(char));
	bzero(str2 + 15, 0 * sizeof(char));
	ft_assert(1, !memcmp(str1, str2, 15));
	ft_bzero(str1 + 14, 1 * sizeof(char));
	bzero(str2 + 14, 1 * sizeof(char));
	ft_assert(2, !memcmp(str1, str2, 15));
	ft_bzero(str1, 0 * sizeof(char));
	bzero(str2, 0 * sizeof(char));
	ft_assert(3, !memcmp(str1, str2, 15));
	ft_bzero(str1, 1 * sizeof(char));
	bzero(str2, 1 * sizeof(char));
	ft_assert(4, !memcmp(str1, str2, 15));
	str1[0] = 'T';
	str2[0] = 'T';
	ft_bzero(str1 + 7, 3 * sizeof(char));
	bzero(str2 + 7, 3 * sizeof(char));
	ft_assert(5, !memcmp(str1, str2, 15));
	memset(str1 + 7, 'a', 3 * sizeof(char));
	memset(str2 + 7, 'a', 3 * sizeof(char));
	ft_bzero(str1, strlen(str1));
	bzero(str2, strlen(str2));
	ft_assert(6, !memcmp(str1, str2, 15));
	memset(str1, 'a', 14 * sizeof(char));
	memset(str2, 'a', 14 * sizeof(char));
	ft_bzero(str1, strlen(str1) + 2);
	bzero(str2, strlen(str2) + 2);
	ft_assert(7, !memcmp(str1, str2, 18));
}
