/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:25 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:01:27 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_itoa_test(void)
{
	char	*str;

	printf(RESET "\nft_itoa\t\t");
	str = ft_itoa(0);
	ft_assert(1, !strcmp(str, "0"));
	ft_assert(2, strlen(str) == strlen("0"));
	free(str);
	str = ft_itoa(-0);
	ft_assert(3, !strcmp(str, "0"));
	ft_assert(4, strlen(str) == strlen("0"));
	free(str);
	str = ft_itoa(-123);
	ft_assert(5, !strcmp(str, "-123"));
	ft_assert(6, strlen(str) == strlen("-123"));
	free(str);
	str = ft_itoa(456);
	ft_assert(7, !strcmp(str, "456"));
	ft_assert(8, strlen(str) == strlen("456"));
	free(str);
	str = ft_itoa(-2147483648);
	ft_assert(9, !strcmp(str, "-2147483648"));
	ft_assert(10, strlen(str) == strlen("-2147483648"));
	free(str);
	str = ft_itoa(2147483647);
	ft_assert(11, !strcmp(str, "2147483647"));
	ft_assert(12, strlen(str) == strlen("2147483647"));
	free(str);
	str = ft_itoa(1000000000);
	ft_assert(13, !strcmp(str, "1000000000"));
	ft_assert(14, strlen(str) == strlen("1000000000"));
	free(str);
}
