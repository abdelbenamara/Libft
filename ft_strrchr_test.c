/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:22:12 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:37:42 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strrchr_test(void)
{
	char	str[15] = "This is a test";

	printf(RESET "\nft_strrchr\t");
	ft_assert(1, ft_strrchr(str, ' ') == strrchr(str, ' '));
	ft_assert(2, ft_strrchr(str, '\0') == strrchr(str, '\0'));
	ft_assert(3, ft_strrchr(str, 'T') == strrchr(str, 'T'));
	ft_assert(4, ft_strrchr(str, 't') == strrchr(str, 't'));
	ft_assert(5, ft_strrchr(str, 'z') == strrchr(str, 'z'));
	str[0] = '\0';
	ft_assert(6, ft_strrchr(str, 'a') == strrchr(str, 'a'));
	ft_assert(7, ft_strrchr(str + 7, 'i') == strrchr(str + 7, 'i'));
}
