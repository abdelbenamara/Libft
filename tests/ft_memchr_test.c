/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:21:13 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 00:15:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memchr_test(void)
{
	char	str[15] = "This is a test";

	printf("ft_memchr\t   |\t\t");
	assert(ft_memchr(str, ' ', 0 * sizeof(uint8_t)) == memchr(str, ' ', 0 * sizeof(uint8_t)));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_memchr(str, ' ', strlen(str)) == memchr(str, ' ', strlen(str)));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_memchr(str, '\0', strlen(str)) == memchr(str, '\0', strlen(str)));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_memchr(str, '\0', strlen(str) + 1) == memchr(str, '\0', strlen(str) + 1));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_memchr(str, 'T', strlen(str)) == memchr(str, 'T', strlen(str)));
	printf(BOLDGREEN "5. OK\t");
	assert(ft_memchr(str, 't', strlen(str)) == memchr(str, 't', strlen(str)));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_memchr(str, 'z', strlen(str)) == memchr(str, 'z', strlen(str)));
	printf(BOLDGREEN "7. OK\t");
	assert(ft_memchr(str, 'a', strlen(str)) == memchr(str, 'a', strlen(str)));
	printf(BOLDGREEN "8. OK\t");
	assert(ft_memchr(str, 'a', strlen(str) - 7) == memchr(str, 'a', strlen(str) - 7));
	printf(BOLDGREEN "9. OK\t");
	assert(ft_memchr(str + 7, 'i', strlen(str) - 7) == memchr(str + 7, 'i', strlen(str) - 7));
	printf(BOLDGREEN "10. OK" RESET "\n");
}
