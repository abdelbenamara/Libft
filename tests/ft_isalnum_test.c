/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:01:00 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/12 01:07:33 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_isalnum_test(void)
{
	printf("ft_isalnum\t\t\t");
	assert(ft_isalnum('A') != 0 && isalnum('A') != 0);
	printf(BOLDGREEN "1. OK\t");
	assert(ft_isalnum('Z') != 0 && isalnum('Z') != 0);
	printf(BOLDGREEN "2. OK\t");
	assert(ft_isalnum('M') != 0 && isalnum('M') != 0);
	printf(BOLDGREEN "3. OK\t");
	assert(ft_isalnum('a') != 0 && isalnum('a') != 0);
	printf(BOLDGREEN "4. OK\t");
	assert(ft_isalnum('z') != 0 && isalnum('z') != 0);
	printf(BOLDGREEN "5. OK\t");
	assert(ft_isalnum('m') != 0 && isalnum('m') != 0);
	printf(BOLDGREEN "6. OK\t");
	assert(ft_isalnum('0') != 0 && isalnum('0') != 0);
	printf(BOLDGREEN "7. OK\t");
	assert(ft_isalnum('9') != 0 && isalnum('9') != 0);
	printf(BOLDGREEN "8. OK\t");
	assert(ft_isalnum('5') != 0 && isalnum('5') != 0);
	printf(BOLDGREEN "9. OK\t");
	assert(ft_isalnum(224) == 0 && isalnum(224) == 0);
	printf(BOLDGREEN "10. OK\t");
	assert(ft_isalnum(216) == 0 && isalnum(216) == 0);
	printf(BOLDGREEN "11. OK\t");
	assert(ft_isalnum(' ') == 0 && isalnum(' ') == 0);
	printf(BOLDGREEN "12. OK" RESET "\n");
}
