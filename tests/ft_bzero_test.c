/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:33:21 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/16 23:34:00 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_bzero_test(void)
{
	char	str1[15] = "This is a test";
	char	str2[15] = "This is a test";

	printf("ft_bzero\t\t\t");
	ft_bzero(str1 + 15, 0 * sizeof(char));
	bzero(str2 + 15, 0 * sizeof(char));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "1. OK\t");
	ft_bzero(str1 + 14, 1 * sizeof(char));
	bzero(str2 + 14, 1 * sizeof(char));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	ft_bzero(str1, 0 * sizeof(char));
	bzero(str2, 0 * sizeof(char));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "3. OK\t");
	ft_bzero(str1, 1 * sizeof(char));
	bzero(str2, 1 * sizeof(char));
	assert(!strcmp(str1, str2));
	str1[0] = 'T';
	str2[0] = 'T';
	printf(BOLDGREEN "4. OK\t");
	ft_bzero(str1 + 7, 3 * sizeof(char));
	bzero(str2 + 7, 3 * sizeof(char));
	assert(!strcmp(str1, str2));
	memset(str1 + 7, 'a', 3 * sizeof(char));
	memset(str2 + 7, 'a', 3 * sizeof(char));
	printf(BOLDGREEN "5. OK\t");
	ft_bzero(str1, strlen(str1));
	bzero(str2, strlen(str2));
	assert(!strcmp(str1, str2));
	memset(str1, 'a', 14 * sizeof(char));
	memset(str2, 'a', 14 * sizeof(char));
	printf(BOLDGREEN "6. OK\t");
	ft_bzero(str1, strlen(str1) + 2);
	bzero(str2, strlen(str2) + 2);
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "7. OK" RESET "\n");
}
