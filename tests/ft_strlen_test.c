/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:04:24 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/13 01:11:47 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_strlen_test(void)
{
	printf("ft_strlen\t\t\t");
	assert(ft_strlen("") == strlen(""));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_strlen("\0") == strlen("\0"));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strlen(" ") == strlen(" "));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_strlen(" \0 ") == strlen(" \0 "));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strlen("abcde") == strlen("abcde"));
	printf(BOLDGREEN "5. OK" RESET "\n");
}
