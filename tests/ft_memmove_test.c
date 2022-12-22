/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:15:44 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/21 16:18:18 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memmove_test(void)
{
	char	str1[15] = "This is a test";
	char	str2[15] = "This is a test";

	printf("ft_memmove\t");
	assert(!strcmp(ft_memmove(str1, "test", 0 * sizeof(char)), memmove(str2, "test", 0 * sizeof(char))));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "1. OK\t");
	assert(!strcmp(ft_memmove(str1, "test", 4 * sizeof(char)), memmove(str2, "test", 4 * sizeof(char))));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	assert(!strcmp(ft_memmove(str1 + 8, "Ø", 1 * sizeof(char)), memmove(str2 + 8, "Ø", 1 * sizeof(char))));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "3. OK\t");
	assert(!strcmp(ft_memmove(str1, "This is a test", strlen(str1)), memmove(str2, "This is a test", strlen(str2))));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "4. OK\t");
	assert(!strcmp(ft_memmove(str1, "This is a test", strlen(str1) + 2), memmove(str2, "This is a test", strlen(str2) + 2)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "5. OK\t");
	assert(!strcmp(ft_memmove(str1, str1 + 4, 10 * sizeof(char)), memmove(str2, str2 + 4, 10 * sizeof(char))));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "6. OK\t");
	assert(!strcmp(ft_memmove(str1 + 4, str1, 10 * sizeof(char)), memmove(str2 + 4, str2, 10 * sizeof(char))));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "7. OK" RESET "\n");
}
