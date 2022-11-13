/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:00:36 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/12 02:13:24 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_isprint_test(void)
{
	printf("ft_isprint\t\t\t");
	assert(ft_isprint(' ') != 0 && isprint(' ') != 0);
	printf(BOLDGREEN "1. OK\t");
	assert(ft_isprint('~') != 0 && isprint('~') != 0);
	printf(BOLDGREEN "2. OK\t");
	assert(ft_isprint('M') != 0 && isprint('M') != 0);
	printf(BOLDGREEN "3. OK\t");
	assert(ft_isprint('5') != 0 && isprint('5') != 0);
	printf(BOLDGREEN "4. OK\t");
	assert(ft_isprint(' ') != 0 && isprint(' ') != 0);
	printf(BOLDGREEN "5. OK\t");
	assert(ft_isprint(-1) == 0 && isprint(-1) == 0);
	printf(BOLDGREEN "6. OK\t");
	assert(ft_isprint(31) == 0 && isprint(31) == 0);
	printf(BOLDGREEN "7. OK\t");
	assert(ft_isprint(127) == 0 && isprint(127) == 0);
	printf(BOLDGREEN "8. OK\t");
	assert(ft_isprint(224) == 0 && isprint(224) == 0);
	printf(BOLDGREEN "9. OK\t");
	assert(ft_isprint(216) == 0 && isprint(216) == 0);
	printf(BOLDGREEN "10. OK" RESET "\n");
}