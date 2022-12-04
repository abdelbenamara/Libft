/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:15:44 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/04 14:27:38 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memmove_test(void)
{
	char	str1[15] = "This is a test";
	char	str2[15] = "This is a test";

	printf("ft_memmove\t\t\t");
	assert(!strcmp(ft_memmove(str1, "test", 0 * sizeof(char)), memmove(str2, "test", 0 * sizeof(char))));
	printf(BOLDGREEN "1. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	assert(!strcmp(ft_memmove(str1, "test", 4 * sizeof(char)), memmove(str2, "test", 4 * sizeof(char))));
	printf(BOLDGREEN "3. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "4. OK\t");
	assert(!strcmp(ft_memmove(str1 + 8, "Ø", 1 * sizeof(char)), memmove(str2 + 8, "Ø", 1 * sizeof(char))));
	printf(BOLDGREEN "5. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "6. OK\t");
	assert(!strcmp(ft_memmove(str1, "This is a test", strlen(str1)), memmove(str2, "This is a test", strlen(str2))));
	printf(BOLDGREEN "7. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "8. OK\t");
	assert(!strcmp(ft_memmove(str1, "This is a test", strlen(str1) + 2), memmove(str2, "This is a test", strlen(str2) + 2)));
	printf(BOLDGREEN "9. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "10. OK\t");
	assert(!strcmp(ft_memmove(str1, str1 + 4, 10 * sizeof(char)), memmove(str2, str2 + 4, 10 * sizeof(char))));
	printf(BOLDGREEN "11. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "12. OK\t");
	assert(!strcmp(ft_memmove(str1 + 4, str1, 10 * sizeof(char)), memmove(str2 + 4, str2, 10 * sizeof(char))));
	printf(BOLDGREEN "13. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "14. OK" RESET "\n");
}
