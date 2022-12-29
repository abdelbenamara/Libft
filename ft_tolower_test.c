/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:48:06 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:35:57 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_tolower_test(void)
{
	printf(RESET "\nft_tolower\t");
	ft_assert(1, ft_tolower('A') == tolower('A'));
	ft_assert(2, ft_tolower('Z') == tolower('Z'));
	ft_assert(3, ft_tolower('M') == tolower('M'));
	ft_assert(4, ft_tolower('a') == tolower('a'));
	ft_assert(5, ft_tolower('z') == tolower('z'));
	ft_assert(6, ft_tolower('m') == tolower('m'));
	ft_assert(7, ft_tolower('\0') == tolower('\0'));
	ft_assert(8, ft_tolower('1') == tolower('1'));
	ft_assert(9, ft_tolower(224) == tolower(224));
	ft_assert(10, ft_tolower(' ') == tolower(' '));
}
