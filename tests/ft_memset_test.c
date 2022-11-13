/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:42:34 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/13 03:42:05 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_memset_test(void)
{
	char	str1[14] = "This is a test";
	char	str2[14] = "This is a test";

	printf("ft_memset\t\t\t");
	assert(!strcmp(ft_memset(str1 + 4, '.', 0 * sizeof(char)), memset(str2 + 4, '.', 0 * sizeof(char))));
	printf(BOLDGREEN "1. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	assert(!strcmp(ft_memset(str1 + 4, '.', 6 * sizeof(char)), memset(str2 + 4, '.', 6 * sizeof(char))));
	printf(BOLDGREEN "3. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "4. OK\t");
	assert(!strcmp(ft_memset(str1 + 4, 216, 6 * sizeof(char)), memset(str2 + 4, 216, 6 * sizeof(char))));
	printf(BOLDGREEN "5. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "6. OK\t");
	assert(!strcmp(ft_memset(str1, '*', strlen(str1)), memset(str2, '*', strlen(str2))));
	printf(BOLDGREEN "7. OK\t");
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "8. OK" RESET "\n");
}