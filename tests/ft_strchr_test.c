/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:37:58 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 20:26:01 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strchr_test(void)
{
	char	str[15] = "This is a test";

	printf("ft_strchr\t");
	assert(ft_strchr(str, ' ') == strchr(str, ' '));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_strchr(str, '\0') == strchr(str, '\0'));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strchr(str, 'T') == strchr(str, 'T'));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_strchr(str, 't') == strchr(str, 't'));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_strchr(str, 'z') == strchr(str, 'z'));
	printf(BOLDGREEN "5. OK\t");
	str[0] = '\0';
	assert(ft_strchr(str, 'a') == strchr(str, 'a'));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_strchr(str + 7, 'i') == strchr(str + 7, 'i'));
	printf(BOLDGREEN "7. OK" RESET "\n");
}
