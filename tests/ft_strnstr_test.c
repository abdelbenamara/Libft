/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:42:41 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/24 23:31:39 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_strnstr_test(void)
{
	char	str[15] = "This is a test";

	printf("ft_strnstr\t\t\t");
	assert(ft_strnstr(str, "test", 0 * sizeof(char)) == strnstr(str, "test", 0 * sizeof(char)));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_strnstr(str, "test", 2 * sizeof(char)) == strnstr(str, "test", 2 * sizeof(char)));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strnstr(str, "test", 5 * sizeof(char)) == strnstr(str, "test", 5 * sizeof(char)));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_strnstr(str, "is", 10 * sizeof(char)) == strnstr(str, "is", 10 * sizeof(char)));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strnstr(str, "This is a test", strlen(str)) == strnstr(str, "This is a test", strlen(str)));
	printf(BOLDGREEN "5. OK\t");
	assert(ft_strnstr(str, "This is another test", 20 * sizeof(char)) == strnstr(str, "This is another test", 20 * sizeof(char)));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_strnstr(str, str + 10, strlen(str)) == strnstr(str, str + 10, strlen(str)));
	printf(BOLDGREEN "7. OK\t");
	assert(ft_strnstr(str, str, 20 * sizeof(char)) == strnstr(str, str, 20 * sizeof(char)));
	printf(BOLDGREEN "8. OK" RESET "\n");
}
