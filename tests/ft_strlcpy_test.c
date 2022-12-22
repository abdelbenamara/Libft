/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:01:23 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/21 16:03:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strlcpy_test(void)
{
	char	str1[15] = "This is a test";
	char	str2[15] = "This is a test";

	printf("ft_strlcpy\t");
	assert(ft_strlcpy(str1, "test", 0 * sizeof(char)) == strlcpy(str2, "test", 0 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_strlcpy(str1, "test", 5 * sizeof(char)) == strlcpy(str2, "test", 5 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strlcpy(str1 + 4, "?", 2 * sizeof(char)) == strlcpy(str2 + 4, "?", 2 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_strlcpy(str1, "This is a test", strlen(str1)) == strlcpy(str2, "This is a test", strlen(str2)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strlcpy(str1, "This is a test", 18 * sizeof(char)) == strlcpy(str2, "This is a test", 18 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "5. OK\t");
	assert(ft_strlcpy(str1, str1 + 4, 11 * sizeof(char)) == strlcpy(str2, str2 + 4, 11 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_strlcpy(str1 + 4, str1, 11 * sizeof(char)) == strlcpy(str2 + 4, str2, 11 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "7. OK" RESET "\n");
}
