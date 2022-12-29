/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:01:00 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:01:21 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_isalnum_test(void)
{
	printf(RESET "\nft_isalnum\t");
	ft_assert(1, ft_isalnum('A') != 0 && isalnum('A') != 0);
	ft_assert(2, ft_isalnum('Z') != 0 && isalnum('Z') != 0);
	ft_assert(3, ft_isalnum('M') != 0 && isalnum('M') != 0);
	ft_assert(4, ft_isalnum('a') != 0 && isalnum('a') != 0);
	ft_assert(5, ft_isalnum('z') != 0 && isalnum('z') != 0);
	ft_assert(6, ft_isalnum('m') != 0 && isalnum('m') != 0);
	ft_assert(7, ft_isalnum('0') != 0 && isalnum('0') != 0);
	ft_assert(8, ft_isalnum('9') != 0 && isalnum('9') != 0);
	ft_assert(9, ft_isalnum('5') != 0 && isalnum('5') != 0);
	ft_assert(10, ft_isalnum(-1) == 0 && isalnum(-1) == 0);
	ft_assert(11, ft_isalnum(' ') == 0 && isalnum(' ') == 0);
	ft_assert(12, ft_isalnum('@') == 0 && isalnum('@') == 0);
	ft_assert(13, ft_isalnum(224) == 0 && isalnum(224) == 0);
	ft_assert(14, ft_isalnum(216) == 0 && isalnum(216) == 0);
}
