/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:21:41 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 20:51:06 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_atoi_test(void)
{
	printf(RESET "\nft_atoi\t\t");
	ft_assert(1, ft_atoi("") == atoi(""));
	ft_assert(2, ft_atoi("0") == atoi("0"));
	ft_assert(3, ft_atoi(" ") == atoi(" "));
	ft_assert(4, ft_atoi("123a456") == atoi("123a456"));
	ft_assert(5, ft_atoi("+123 ") == atoi("+123 "));
	ft_assert(6, ft_atoi("-123\b") == atoi("-123\b"));
	ft_assert(7, ft_atoi("    123") == atoi("    123"));
	ft_assert(8, ft_atoi(" \t\n\v\f\r+123") == atoi(" \t\n\v\f\r+123"));
	ft_assert(9, ft_atoi("z-123") == atoi("z-123"));
	ft_assert(10, ft_atoi("-2147483648") == atoi("-2147483648"));
	ft_assert(11, ft_atoi("+2147483647") == atoi("+2147483647"));
	ft_assert(12, ft_atoi("-2147483649") == atoi("-2147483649"));
	ft_assert(13, ft_atoi("+2147483648") == atoi("+2147483648"));
	ft_assert(14, ft_atoi("    0000789   ") == atoi("    0000789   "));
}
