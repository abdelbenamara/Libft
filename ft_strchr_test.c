/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:37:58 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:37:11 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strchr_test(void)
{
	char	str[15] = "This is a test";

	printf(RESET "\nft_strchr\t");
	ft_assert(1, ft_strchr(str, ' ') == strchr(str, ' '));
	ft_assert(2, ft_strchr(str, '\0') == strchr(str, '\0'));
	ft_assert(3, ft_strchr(str, 'T') == strchr(str, 'T'));
	ft_assert(4, ft_strchr(str, 't') == strchr(str, 't'));
	ft_assert(5, ft_strchr(str, 'z') == strchr(str, 'z'));
	str[0] = '\0';
	ft_assert(6, ft_strchr(str, 'a') == strchr(str, 'a'));
	ft_assert(7, ft_strchr(str + 7, 'i') == strchr(str + 7, 'i'));
}
