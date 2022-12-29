/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:32:23 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:01:31 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_isascii_test(void)
{
	printf(RESET "\nft_isascii\t");
	ft_assert(1, ft_isascii(0) != 0 && isascii(0) != 0);
	ft_assert(2, ft_isascii(127) != 0 && isascii(127) != 0);
	ft_assert(3, ft_isascii('M') != 0 && isascii('M') != 0);
	ft_assert(4, ft_isascii('5') != 0 && isascii('5') != 0);
	ft_assert(5, ft_isascii(' ') != 0 && isascii(' ') != 0);
	ft_assert(6, ft_isascii(-1) == 0 && isascii(-1) == 0);
	ft_assert(7, ft_isascii(128) == 0 && isascii(128) == 0);
	ft_assert(8, ft_isascii(216) == 0 && isascii(216) == 0);
	ft_assert(9, ft_isascii(224) == 0 && isascii(224) == 0);
	ft_assert(10, ft_isascii(255) == 0 && isascii(255) == 0);
}
