/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 23:16:56 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/04 11:08:30 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#define RESET   	"\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void	ft_calloc_test(void)
{
	size_t	*ptr1;
	size_t	*ptr2;

	printf("ft_calloc\t\t\t");
	ptr1 = ft_calloc(0, 0);
	ptr2 = calloc(0, 0);
	assert(!memcmp(ptr1, ptr2, 0));
	free(ptr1);
	free(ptr2);
	printf(BOLDGREEN "1. OK\t");
	ptr1 = ft_calloc(1, 0);
	ptr2 = calloc(1, 0);
	assert(!memcmp(ptr1, ptr2, 0));
	free(ptr1);
	free(ptr2);
	printf(BOLDGREEN "2. OK\t");
	ptr1 = ft_calloc(0, 1 * sizeof(size_t));
	ptr2 = calloc(0, 1 * sizeof(size_t));
	assert(!memcmp(ptr1, ptr2, 0));
	free(ptr1);
	free(ptr2);
	printf(BOLDGREEN "3. OK\t");
	ptr1 = ft_calloc(1, sizeof(size_t));
	ptr2 = calloc(1, sizeof(size_t));
	assert(!memcmp(ptr1, ptr2, 1 * sizeof(size_t)));
	free(ptr1);
	free(ptr2);
	printf(BOLDGREEN "4. OK\t");
	ptr1 = ft_calloc(4096, sizeof(size_t));
	ptr2 = calloc(4096, sizeof(size_t));
	assert(!memcmp(ptr1, ptr2, 4096));
	free(ptr1);
	free(ptr2);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
