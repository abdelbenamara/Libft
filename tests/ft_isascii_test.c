/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:32:23 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/12 01:34:40 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_isascii_test(void)
{
	printf("ft_isascii\t\t\t");
	assert(ft_isascii('A') != 0 && isascii('A') != 0);
	printf(BOLDGREEN "1. OK\t");
	assert(ft_isascii('Z') != 0 && isascii('Z') != 0);
	printf(BOLDGREEN "2. OK\t");
	assert(ft_isascii('M') != 0 && isascii('M') != 0);
	printf(BOLDGREEN "3. OK\t");
	assert(ft_isascii('a') != 0 && isascii('a') != 0);
	printf(BOLDGREEN "4. OK\t");
	assert(ft_isascii('z') != 0 && isascii('z') != 0);
	printf(BOLDGREEN "5. OK\t");
	assert(ft_isascii('m') != 0 && isascii('m') != 0);
	printf(BOLDGREEN "6. OK\t");
	assert(ft_isascii('0') != 0 && isascii('0') != 0);
	printf(BOLDGREEN "7. OK\t");
	assert(ft_isascii('9') != 0 && isascii('9') != 0);
	printf(BOLDGREEN "8. OK\t");
	assert(ft_isascii('5') != 0 && isascii('5') != 0);
	printf(BOLDGREEN "9. OK\t");
	assert(ft_isascii(' ') != 0 && isascii(' ') != 0);
	printf(BOLDGREEN "10. OK\t");
	assert(ft_isascii(224) == 0 && isascii(224) == 0);
	printf(BOLDGREEN "11. OK\t");
	assert(ft_isascii(216) == 0 && isascii(216) == 0);
	printf(BOLDGREEN "12. OK" RESET "\n");
}
