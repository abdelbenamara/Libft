/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:21:13 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:39:34 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memchr_test(void)
{
	char	str[15] = "This is a test";

	printf(RESET "\nft_memchr\t");
	ft_assert(1, ft_memchr(str, ' ', 0 * sizeof(uint8_t)) == memchr(str, ' ', 0 * sizeof(uint8_t)));
	ft_assert(2, ft_memchr(str, ' ', strlen(str)) == memchr(str, ' ', strlen(str)));
	ft_assert(3, ft_memchr(str, '\0', strlen(str)) == memchr(str, '\0', strlen(str)));
	ft_assert(4, ft_memchr(str, '\0', strlen(str) + 1) == memchr(str, '\0', strlen(str) + 1));
	ft_assert(5, ft_memchr(str, 'T', strlen(str)) == memchr(str, 'T', strlen(str)));
	ft_assert(6, ft_memchr(str, 't', strlen(str)) == memchr(str, 't', strlen(str)));
	ft_assert(7, ft_memchr(str, 'z', strlen(str)) == memchr(str, 'z', strlen(str)));
	ft_assert(8, ft_memchr(str, 'a', strlen(str)) == memchr(str, 'a', strlen(str)));
	ft_assert(9, ft_memchr(str, 'a', strlen(str) - 7) == memchr(str, 'a', strlen(str) - 7));
	ft_assert(10, ft_memchr(str + 7, 'i', strlen(str) - 7) == memchr(str + 7, 'i', strlen(str) - 7));
}
