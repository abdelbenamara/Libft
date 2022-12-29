/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:17:18 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:40:23 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_memcmp_test(void)
{
	char	str[29] = "This is a test";

	printf(RESET "\nft_memcmp\t");
	ft_assert(1, ft_memcmp(str, "test", 0 * sizeof(char)) == memcmp(str, "test", 0 * sizeof(char)));
	ft_assert(2, ft_memcmp(str, "test", 5 * sizeof(char)) < 0 && memcmp(str, "test", 5 * sizeof(char)) < 0);
	ft_assert(3, ft_memcmp("test", str, 5 * sizeof(char)) > 0 && memcmp("test", str, 5 * sizeof(char)) > 0);
	ft_assert(4, ft_memcmp(str + 10, "test", 5 * sizeof(char)) == memcmp(str + 10, "test", 5 * sizeof(char)));
	ft_assert(5, ft_memcmp("test", str + 10, 5 * sizeof(char)) == memcmp("test", str + 10, 5 * sizeof(char)));
	ft_assert(6, ft_memcmp(str, "This is a test", strlen(str)) == memcmp(str, "This is a test", strlen(str)));
	ft_assert(7, ft_memcmp(str, "This is b test", strlen(str)) < 0 && memcmp(str, "This is b test", strlen(str)) < 0);
	ft_assert(8, ft_memcmp("This is b test", str, strlen(str)) > 0 && memcmp("This is b test", str, strlen(str)) > 0);
	ft_assert(9, ft_memcmp(str, "This is b test", strlen(str) - 7) == memcmp(str, "This is b test", strlen(str) - 7));
	ft_assert(10, (ft_memcmp(str, "This is c test", strlen(str) + 3) < 0 && memcmp(str, "This is c test", strlen(str) + 3) < 0)
			|| (ft_memcmp(str, "This is c test", strlen(str) + 3) > 0 && memcmp(str, "This is c test", strlen(str) + 3) > 0));
}
