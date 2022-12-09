/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:04:24 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 00:15:41 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strlen_test(void)
{
	printf("ft_strlen\t   |\t\t");
	assert(ft_strlen("") == strlen(""));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_strlen("\0") == strlen("\0"));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strlen(" ") == strlen(" "));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_strlen(" \0 ") == strlen(" \0 "));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strlen("abcde") == strlen("abcde"));
	printf(BOLDGREEN "5. OK" RESET "\n");
}
