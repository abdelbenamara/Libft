/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:29:09 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/13 23:36:39 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_memcpy_test(void)
{
	char	str1[14] = "This is a test";
	char	str2[14] = "This is a test";

	printf("ft_memcpy\t\t\t");
	assert(!strcmp(ft_memcpy(str1, "test", 0 * sizeof(char)), memcpy(str2, "test", 0 * sizeof(char))));
	printf(BOLDGREEN "1. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	assert(!strcmp(ft_memcpy(str1, "test", 4 * sizeof(char)), memcpy(str2, "test", 4 * sizeof(char))));
	printf(BOLDGREEN "3. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "4. OK\t");
	assert(!strcmp(ft_memcpy(str1 + 8, "Ø", 1 * sizeof(char)), memcpy(str2 + 8, "Ø", 1 * sizeof(char))));
	printf(BOLDGREEN "5. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "6. OK\t");
	assert(!strcmp(ft_memcpy(str1, "**************", strlen(str1)), memcpy(str2, "**************", strlen(str2))));
	printf(BOLDGREEN "7. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "8. OK" RESET "\n");
}
