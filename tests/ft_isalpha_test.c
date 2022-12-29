/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:13:18 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 20:53:41 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_isalpha_test(void)
{
	printf(RESET "\nft_isalpha\t");
	ft_assert(1, ft_isalpha('A') != 0 && isalpha('A') != 0);
	ft_assert(2, ft_isalpha('Z') != 0 && isalpha('Z') != 0);
	ft_assert(3, ft_isalpha('M') != 0 && isalpha('M') != 0);
	ft_assert(4, ft_isalpha('a') != 0 && isalpha('a') != 0);
	ft_assert(5, ft_isalpha('z') != 0 && isalpha('z') != 0);
	ft_assert(6, ft_isalpha('m') != 0 && isalpha('m') != 0);
	ft_assert(7, ft_isalpha(-1) == 0 && isalpha(-1) == 0);
	ft_assert(8, ft_isalpha('1') == 0 && isalpha('1') == 0);
	ft_assert(9, ft_isalpha(224) == 0 && isalpha(224) == 0);
	ft_assert(10, ft_isalpha(' ') == 0 && isalpha(' ') == 0);
}
