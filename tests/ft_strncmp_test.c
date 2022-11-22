/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:44:02 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/22 22:12:47 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_strncmp_test(void)
{
	char	str[29] = "This is a test";

	printf("ft_strncmp\t\t\t");
	assert(ft_strncmp(str, "test", 0 * sizeof(char)) == strncmp(str, "test", 0 * sizeof(char)));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_strncmp(str, "test", 5 * sizeof(char)) < 0 && strncmp(str, "test", 5 * sizeof(char)) < 0);
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strncmp("test", str, 5 * sizeof(char)) > 0 && strncmp("test", str, 5 * sizeof(char)) > 0);
	printf(BOLDGREEN "3. OK\t");
	assert(ft_strncmp(str + 10, "test", 5 * sizeof(char)) == strncmp(str + 10, "test", 5 * sizeof(char)));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strncmp("test", str + 10, 5 * sizeof(char)) == strncmp("test", str + 10, 5 * sizeof(char)));
	printf(BOLDGREEN "5. OK\t");
	assert(ft_strncmp(str, "This is a test", strlen(str)) == strncmp(str, "This is a test", strlen(str)));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_strncmp(str, "This is a test", strlen(str) + 3) == strncmp(str, "This is a test", strlen(str) + 3));
	printf(BOLDGREEN "7. OK\t");
	assert(ft_strncmp(str, "This is b test", strlen(str)) < 0 && strncmp(str, "This is b test", strlen(str)) < 0);
	printf(BOLDGREEN "8. OK\t");
	assert(ft_strncmp("This is b test", str, strlen(str)) > 0 && strncmp("This is b test", str, strlen(str)) > 0);
	printf(BOLDGREEN "9. OK\t");
	assert(ft_strncmp(str, "This is b test", strlen(str) - 7) == strncmp(str, "This is b test", strlen(str) - 7));
	printf(BOLDGREEN "10. OK" RESET "\n");
}