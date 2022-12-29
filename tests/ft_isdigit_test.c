/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:12:52 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:01:12 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_isdigit_test(void)
{
	printf(RESET "\nft_isdigit\t");
	ft_assert(1, ft_isdigit('0') != 0 && isdigit('0') != 0);
	ft_assert(2, ft_isdigit('9') != 0 && isdigit('9') != 0);
	ft_assert(3, ft_isdigit('5') != 0 && isdigit('5') != 0);
	ft_assert(4, ft_isdigit(-1) == 0 && isdigit(-1) == 0);
	ft_assert(5, ft_isdigit('x') == 0 && isdigit('x') == 0);
	ft_assert(6, ft_isdigit(216) == 0 && isdigit(216) == 0);
	ft_assert(7, ft_isdigit(' ') == 0 && isdigit(' ') == 0);
}
