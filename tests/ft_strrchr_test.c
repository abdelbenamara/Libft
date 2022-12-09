/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:22:12 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 00:31:37 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strrchr_test(void)
{
	char	str[15] = "This is a test";

	printf("ft_strrchr\t   |\t\t");
	assert(ft_strrchr(str, ' ') == strrchr(str, ' '));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_strrchr(str, '\0') == strrchr(str, '\0'));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strrchr(str, 'T') == strrchr(str, 'T'));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_strrchr(str, 't') == strrchr(str, 't'));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strrchr(str, 'z') == strrchr(str, 'z'));
	printf(BOLDGREEN "5. OK\t");
	str[0] = '\0';
	assert(ft_strrchr(str, 'a') == strrchr(str, 'a'));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_strrchr(str + 7, 'i') == strrchr(str + 7, 'i'));
	printf(BOLDGREEN "7. OK" RESET "\n");
}
