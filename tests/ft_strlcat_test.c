/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:26:00 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/17 17:53:07 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_strlcat_test(void)
{
	char	str1[29] = "This is a test";
	char	str2[29] = "This is a test";

	printf("ft_strlcat\t\t\t");
	assert(ft_strlcat(str1, "test", 0 * sizeof(char)) == strlcat(str2, "test", 0 * sizeof(char)));
	printf(BOLDGREEN "1. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strlcat(str1, "test", 5 * sizeof(char)) == strlcat(str2, "test", 5 * sizeof(char)));
	printf(BOLDGREEN "3. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strlcat(str1 + 4, "?!", 11 * sizeof(char)) == strlcat(str2 + 4, "?!", 11 * sizeof(char)));
	printf(BOLDGREEN "5. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_strlcat(str1, "This is a test", strlen(str1) * 2 + 1) == strlcat(str2, "This is a test", strlen(str2) * 2 + 1));
	printf(BOLDGREEN "7. OK\t");
	assert(!strcmp(str1, str2));
	str1[14] = '\0';
	str2[14] = '\0';
	printf(BOLDGREEN "8. OK\t");
	assert(ft_strlcat(str1, "This is another test", 29 * sizeof(char)) == strlcat(str2, "This is another test", 29 * sizeof(char)));
	printf(BOLDGREEN "9. OK\t");
	assert(!strcmp(str1, str2));
	str1[14] = '\0';
	str2[14] = '\0';
	printf(BOLDGREEN "10. OK\t");
	assert(ft_strlcat(str1 + 7, str1, 22 * sizeof(char)) == strlcat(str2 + 7, str2, 22 * sizeof(char)));
	printf(BOLDGREEN "11. OK\t");
	assert(!strcmp(str1, str2));
	str1[14] = '\0';
	str2[14] = '\0';
	printf(BOLDGREEN "12. OK\t");
	assert(ft_strlcat(str1, str1 + 7, 29 * sizeof(char)) == strlcat(str2, str2 + 7, 29 * sizeof(char)));
	printf(BOLDGREEN "13. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "14. OK" RESET "\n");
}
