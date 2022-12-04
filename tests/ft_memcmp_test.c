/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:17:18 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/04 14:26:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memcmp_test(void)
{
	char	str[29] = "This is a test";

	printf("ft_memcmp\t\t\t");
	assert(ft_memcmp(str, "test", 0 * sizeof(char)) == memcmp(str, "test", 0 * sizeof(char)));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_memcmp(str, "test", 5 * sizeof(char)) < 0 && memcmp(str, "test", 5 * sizeof(char)) < 0);
	printf(BOLDGREEN "2. OK\t");
	assert(ft_memcmp("test", str, 5 * sizeof(char)) > 0 && memcmp("test", str, 5 * sizeof(char)) > 0);
	printf(BOLDGREEN "3. OK\t");
	assert(ft_memcmp(str + 10, "test", 5 * sizeof(char)) == memcmp(str + 10, "test", 5 * sizeof(char)));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_memcmp("test", str + 10, 5 * sizeof(char)) == memcmp("test", str + 10, 5 * sizeof(char)));
	printf(BOLDGREEN "5. OK\t");
	assert(ft_memcmp(str, "This is a test", strlen(str)) == memcmp(str, "This is a test", strlen(str)));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_memcmp(str, "This is b test", strlen(str)) < 0 && memcmp(str, "This is b test", strlen(str)) < 0);
	printf(BOLDGREEN "7. OK\t");
	assert(ft_memcmp("This is b test", str, strlen(str)) > 0 && memcmp("This is b test", str, strlen(str)) > 0);
	printf(BOLDGREEN "8. OK\t");
	assert(ft_memcmp(str, "This is b test", strlen(str) - 7) == memcmp(str, "This is b test", strlen(str) - 7));
	printf(BOLDGREEN "9. OK" RESET "\n");
}
