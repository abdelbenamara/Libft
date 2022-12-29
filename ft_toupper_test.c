/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:02:50 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:32:56 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_toupper_test(void)
{
	printf(RESET "\nft_toupper\t");
	ft_assert(1, ft_toupper('A') == toupper('A'));
	ft_assert(2, ft_toupper('Z') == toupper('Z'));
	ft_assert(3, ft_toupper('M') == toupper('M'));
	ft_assert(4, ft_toupper('a') == toupper('a'));
	ft_assert(5, ft_toupper('z') == toupper('z'));
	ft_assert(6, ft_toupper('m') == toupper('m'));
	ft_assert(7, ft_toupper('\0') == toupper('\0'));
	ft_assert(8, ft_toupper('1') == toupper('1'));
	ft_assert(9, ft_toupper(224) == toupper(224));
	ft_assert(10, ft_toupper(' ') == toupper(' '));
}
