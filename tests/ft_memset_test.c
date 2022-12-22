/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:42:34 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/21 17:54:33 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memset_test(void)
{
	char	str1[15] = "This is a test";
	char	str2[15] = "This is a test";

	printf("ft_memset\t");
	assert(!memcmp(ft_memset(str1 + 2, '.', 0 * sizeof(char)), memset(str2 + 2, '.', 0 * sizeof(char)), 0));
	assert(!memcmp(str1, str2, 0));
	printf(BOLDGREEN "1. OK\t");
	assert(!memcmp(ft_memset(str1 + 2, '.', 8 * sizeof(char)), memset(str2 + 2, '.', 8 * sizeof(char)), 8));
	assert(!memcmp(str1, str2, 8));
	printf(BOLDGREEN "2. OK\t");
	assert(!memcmp(ft_memset(str1 + 2, 216, 8 * sizeof(char)), memset(str2 + 2, 216, 8 * sizeof(char)), 8));
	assert(!memcmp(str1, str2, 8));
	printf(BOLDGREEN "3. OK\t");
	assert(!memcmp(ft_memset(str1, '*', strlen(str1)), memset(str2, '*', strlen(str2)), 15));
	assert(!memcmp(str1, str2, 15));
	printf(BOLDGREEN "4. OK\t");
	assert(!memcmp(ft_memset(str1, '*', 18), memset(str2, '*', 18), 18));
	assert(!memcmp(str1, str2, 18));
	printf(BOLDGREEN "5. OK" RESET "\n");
}
