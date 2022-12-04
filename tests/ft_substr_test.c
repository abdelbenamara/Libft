/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:52:03 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/04 12:02:01 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_substr_test(void)
{
	printf("ft_substr \t\t\t");
	assert(!strcmp(ft_substr("", 0, 0), ""));
	printf(BOLDGREEN "1. OK\t");
	assert(!strcmp(ft_substr("", 1, 1), ""));
	printf(BOLDGREEN "2. OK\t");
	assert(!strcmp(ft_substr("test", 0, strlen("test")), "test"));
	printf(BOLDGREEN "3. OK\t");
	assert(!strcmp(ft_substr("test", 1, strlen("test")), "est"));
	printf(BOLDGREEN "4. OK\t");
	assert(!strcmp(ft_substr("test", 2, 1), "s"));
	printf(BOLDGREEN "5. OK\t");
	assert(!strcmp(ft_substr("This is a test", 5, 2), "is"));
	printf(BOLDGREEN "6. OK\t");
	assert(!strcmp(ft_substr("This test is a test", 5, 4), "test"));
	printf(BOLDGREEN "7. OK\t");
	assert(!strcmp(ft_substr("This is another test", 0, strlen("This is another test") + 3), "This is another test"));
	printf(BOLDGREEN "8. OK" RESET "\n");
}
