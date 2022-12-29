/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:52:03 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:46:26 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_substr_test(void)
{
	char	*str;

	printf(RESET "\nft_substr\t");
	str = ft_substr("", 0, 0);
	ft_assert(1, !strcmp(str, ""));
	free(str);
	str = ft_substr("", 1, 2);
	ft_assert(2, !strcmp(str, ""));
	free(str);
	str = ft_substr("test", 0, 0);
	ft_assert(3, !strcmp(str, ""));
	free(str);
	str = ft_substr("test", 1, strlen("test"));
	ft_assert(4, !strcmp(str, "est"));
	free(str);
	str = ft_substr("test", 2, 1);
	ft_assert(5, !strcmp(str, "s"));
	free(str);
	str = ft_substr("This is a test", 20, 2);
	ft_assert(6, !strcmp(str, ""));
	free(str);
	str = ft_substr("This test is a test", 5, 4);
	ft_assert(7, !strcmp(str, "test"));
	free(str);
	str = ft_substr("This is another test", 0, strlen("This is another test"));
	ft_assert(8, !strcmp(str, "This is another test"));
	free(str);
}
