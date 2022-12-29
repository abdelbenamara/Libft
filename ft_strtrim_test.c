/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:16:07 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:47:36 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strtrim_test(void)
{
	char	*str;

	printf(RESET "\nft_strtrim\t");
	str = ft_strtrim("", "");
	ft_assert(1, !strcmp(str, ""));
	free(str);
	str = ft_strtrim("test", "");
	ft_assert(2, !strcmp(str, "test"));
	free(str);
	str = ft_strtrim("", "test");
	ft_assert(3, !strcmp(str, ""));
	free(str);
	str = ft_strtrim("test", "abc");
	ft_assert(4, !strcmp(str, "test"));
	free(str);
	str = ft_strtrim(" test", " ");
	ft_assert(5, !strcmp(str, "test"));
	free(str);
	str = ft_strtrim("test ", " ");
	ft_assert(6, !strcmp(str, "test"));
	free(str);
	str = ft_strtrim(" test ", " ");
	ft_assert(7, !strcmp(str, "test"));
	free(str);
	str = ft_strtrim("     test           ", "   ");
	ft_assert(8, !strcmp(str, "test"));
	free(str);
	str = ft_strtrim(" abc a b c a b c test abc abc a b c ", "abc ");
	ft_assert(9, !strcmp(str, "test"));
	free(str);
	str = ft_strtrim("   This is a test with 'abc ' in it   ", "abc ");
	ft_assert(10, !strcmp(str, "This is a test with 'abc ' in it"));
	free(str);
}
