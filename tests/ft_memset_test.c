/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:42:34 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/04 14:27:52 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memset_test(void)
{
	char	str1[15] = "This is a test";
	char	str2[15] = "This is a test";

	printf("ft_memset\t\t\t");
	assert(!strcmp(ft_memset(str1 + 2, '.', 0 * sizeof(char)), memset(str2 + 2, '.', 0 * sizeof(char))));
	printf(BOLDGREEN "1. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	assert(!strcmp(ft_memset(str1 + 2, '.', 6 * sizeof(char)), memset(str2 + 2, '.', 6 * sizeof(char))));
	printf(BOLDGREEN "3. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "4. OK\t");
	assert(!strcmp(ft_memset(str1 + 2, 216, 6 * sizeof(char)), memset(str2 + 2, 216, 6 * sizeof(char))));
	printf(BOLDGREEN "5. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "6. OK\t");
	assert(!strcmp(ft_memset(str1, '*', strlen(str1)), memset(str2, '*', strlen(str2))));
	printf(BOLDGREEN "7. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "8. OK\t");
	assert(!strcmp(ft_memset(str1, '*', strlen(str1) + 2), memset(str1, '*', strlen(str1) + 2)));
	printf(BOLDGREEN "9. OK" RESET "\n");
}
