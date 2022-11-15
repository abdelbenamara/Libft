/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:01:23 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/15 02:09:21 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_strlcpy_test(void)
{
	char	str1[15] = "This is a test";
	char	str2[15] = "This is a test";

	printf("ft_strlcpy\t\t\t");
	assert(ft_strlcpy(str1, "test", 0 * sizeof(char)) == strlcpy(str2, "test", 0 * sizeof(char)));
	printf(BOLDGREEN "1. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strlcpy(str1, "test", 5 * sizeof(char)) == strlcpy(str2, "test", 5 * sizeof(char)));
	printf(BOLDGREEN "3. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strlcpy(str1 + 4, "?", 2 * sizeof(char)) == strlcpy(str2 + 4, "?", 2 * sizeof(char)));
	printf(BOLDGREEN "5. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_strlcpy(str1, "**************", strlen(str1)) == strlcpy(str2, "**************", strlen(str2)));
	printf(BOLDGREEN "7. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "8. OK\t");
	assert(ft_strlcpy(str1, "**************", strlen(str1) + 2) == strlcpy(str2, "**************", strlen(str2) + 2));
	printf(BOLDGREEN "9. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "10. OK\t");
	assert(ft_strlcpy(str1, str1 + 4, 11 * sizeof(char)) == strlcpy(str2, str2 + 4, 11 * sizeof(char)));
	printf(BOLDGREEN "11. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "12. OK\t");
	assert(ft_strlcpy(str1 + 4, str1, 11 * sizeof(char)) == strlcpy(str2 + 4, str2, 11 * sizeof(char)));
	printf(BOLDGREEN "13. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "14. OK" RESET "\n");
}
