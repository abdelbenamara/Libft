/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:12:52 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/11 17:47:11 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_isdigit_test(void)
{
	printf("ft_isdigit\t\t\t");
	assert(ft_isdigit('0') != 0 && isdigit('0') != 0);
	printf(BOLDGREEN "1. OK\t");
	assert(ft_isdigit('9') != 0 && isdigit('9') != 0);
	printf(BOLDGREEN "2. OK\t");
	assert(ft_isdigit('5') != 0 && isdigit('5') != 0);
	printf(BOLDGREEN "3. OK\t");
	assert(ft_isdigit('n') == 0 && isdigit('n') == 0);
	printf(BOLDGREEN "4. OK\t");
	assert(ft_isdigit(216) == 0 && isdigit(216) == 0);
	printf(BOLDGREEN "5. OK\t");
	assert(ft_isdigit(' ') == 0 && isdigit(' ') == 0);
	printf(BOLDGREEN "6. OK" RESET "\n");
}
