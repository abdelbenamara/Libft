/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:42:41 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:40:56 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strnstr_test(void)
{
	char	str[15] = "This is a test";

	printf(RESET "\nft_strnstr\t");
	ft_assert(1, ft_strnstr(str, "", 0 * sizeof(char)) == strnstr(str, "", 0 * sizeof(char)));
	ft_assert(2, ft_strnstr(str, "test", 0 * sizeof(char)) == strnstr(str, "test", 0 * sizeof(char)));
	ft_assert(3, ft_strnstr(str, "test", 2 * sizeof(char)) == strnstr(str, "test", 2 * sizeof(char)));
	ft_assert(4, ft_strnstr(str, "is", 5 * sizeof(char)) == strnstr(str, "is", 5 * sizeof(char)));
	ft_assert(5, ft_strnstr(str, "This is a test", strlen(str)) == strnstr(str, "This is a test", strlen(str)));
	ft_assert(6, ft_strnstr(str, "This is another test", 20 * sizeof(char)) == strnstr(str, "This is another test", 20 * sizeof(char)));
	ft_assert(7, ft_strnstr(str, str + 10, strlen(str)) == strnstr(str, str + 10, strlen(str)));
	ft_assert(8, ft_strnstr(str, str, 20 * sizeof(char)) == strnstr(str, str, 20 * sizeof(char)));
}
