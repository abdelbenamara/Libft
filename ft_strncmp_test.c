/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:44:02 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:38:27 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strncmp_test(void)
{
	char	str[29] = "This is a test";

	printf(RESET "\nft_strncmp\t");
	ft_assert(1, ft_strncmp(str, "test", 0 * sizeof(char)) == strncmp(str, "test", 0 * sizeof(char)));
	ft_assert(2, ft_strncmp(str, "test", 5 * sizeof(char)) < 0 && strncmp(str, "test", 5 * sizeof(char)) < 0);
	ft_assert(3, ft_strncmp("test", str, 5 * sizeof(char)) > 0 && strncmp("test", str, 5 * sizeof(char)) > 0);
	ft_assert(4, ft_strncmp(str + 10, "test", 5 * sizeof(char)) == strncmp(str + 10, "test", 5 * sizeof(char)));
	ft_assert(5, ft_strncmp("test", str + 10, 5 * sizeof(char)) == strncmp("test", str + 10, 5 * sizeof(char)));
	ft_assert(6, ft_strncmp(str, "This is a test", strlen(str)) == strncmp(str, "This is a test", strlen(str)));
	ft_assert(7, ft_strncmp(str, "This is a test", strlen(str) + 3) == strncmp(str, "This is a test", strlen(str) + 3));
	ft_assert(8, ft_strncmp(str, "This is b test", strlen(str)) < 0 && strncmp(str, "This is b test", strlen(str)) < 0);
	ft_assert(9, ft_strncmp("This is b test", str, strlen(str)) > 0 && strncmp("This is b test", str, strlen(str)) > 0);
	ft_assert(10, ft_strncmp(str, "This is b test", strlen(str) - 7) == strncmp(str, "This is b test", strlen(str) - 7));
}
