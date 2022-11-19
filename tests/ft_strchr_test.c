/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:37:58 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/19 01:31:26 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_strchr_test(void)
{
	char	str[15] = "This is a test";

	printf("ft_strchr\t\t\t");
	assert(ft_strchr(str, ' ') == strchr(str, ' '));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_strchr(str, '\0') == strchr(str, '\0'));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strchr(str, 'T') == strchr(str, 'T'));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_strchr(str, 't') == strchr(str, 't'));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strchr(str, 'z') == strchr(str, 'z'));
	printf(BOLDGREEN "5. OK\t");
	str[0] = '\0';
	assert(ft_strchr(str, 'a') == strchr(str, 'a'));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_strchr(str + 7, 'i') == strchr(str + 7, 'i'));
	printf(BOLDGREEN "7. OK" RESET "\n");
}
