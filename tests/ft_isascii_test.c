/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:32:23 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/08 22:33:29 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_isascii_test(void)
{
	printf("ft_isascii\t\t\t");
	assert(ft_isascii(0) != 0 && isascii(0) != 0);
	printf(BOLDGREEN "1. OK\t");
	assert(ft_isascii(127) != 0 && isascii(127) != 0);
	printf(BOLDGREEN "2. OK\t");
	assert(ft_isascii('M') != 0 && isascii('M') != 0);
	printf(BOLDGREEN "3. OK\t");
	assert(ft_isascii('5') != 0 && isascii('5') != 0);
	printf(BOLDGREEN "4. OK\t");
	assert(ft_isascii(' ') != 0 && isascii(' ') != 0);
	printf(BOLDGREEN "5. OK\t");
	assert(ft_isascii(-1) == 0 && isascii(-1) == 0);
	printf(BOLDGREEN "6. OK\t");
	assert(ft_isascii(128) == 0 && isascii(128) == 0);
	printf(BOLDGREEN "7. OK\t");
	assert(ft_isascii(216) == 0 && isascii(216) == 0);
	printf(BOLDGREEN "8. OK\t");
	assert(ft_isascii(224) == 0 && isascii(224) == 0);
	printf(BOLDGREEN "9. OK\t");
	assert(ft_isascii(255) == 0 && isascii(255) == 0);
	printf(BOLDGREEN "10. OK" RESET "\n");
}
