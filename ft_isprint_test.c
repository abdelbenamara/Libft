/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:00:36 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:01:45 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_isprint_test(void)
{
	printf(RESET "\nft_isprint\t");
	ft_assert(1, ft_isprint(' ') != 0 && isprint(' ') != 0);
	ft_assert(2, ft_isprint('~') != 0 && isprint('~') != 0);
	ft_assert(3, ft_isprint('M') != 0 && isprint('M') != 0);
	ft_assert(4, ft_isprint('5') != 0 && isprint('5') != 0);
	ft_assert(5, ft_isprint(' ') != 0 && isprint(' ') != 0);
	ft_assert(6, ft_isprint(-1) == 0 && isprint(-1) == 0);
	ft_assert(7, ft_isprint(31) == 0 && isprint(31) == 0);
	ft_assert(8, ft_isprint(127) == 0 && isprint(127) == 0);
	ft_assert(9, ft_isprint(224) == 0 && isprint(224) == 0);
	ft_assert(10, ft_isprint(216) == 0 && isprint(216) == 0);
}
