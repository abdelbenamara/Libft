/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:04:24 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:02:36 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strlen_test(void)
{
	printf(RESET "\nft_strlen\t");
	ft_assert(1, ft_strlen("") == strlen(""));
	ft_assert(2, ft_strlen("\0") == strlen("\0"));
	ft_assert(3, ft_strlen(" ") == strlen(" "));
	ft_assert(4, ft_strlen(" \0 ") == strlen(" \0 "));
	ft_assert(5, ft_strlen("abcde") == strlen("abcde"));
}
