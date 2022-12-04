/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:02:50 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/04 14:31:21 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_toupper_test(void)
{
	printf("ft_toupper\t\t\t");
	assert(ft_toupper('A') == toupper('A'));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_toupper('Z') == toupper('Z'));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_toupper('M') == toupper('M'));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_toupper('a') == toupper('a'));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_toupper('z') == toupper('z'));
	printf(BOLDGREEN "5. OK\t");
	assert(ft_toupper('m') == toupper('m'));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_toupper('\0') == toupper('\0'));
	printf(BOLDGREEN "7. OK\t");
	assert(ft_toupper('1') == toupper('1'));
	printf(BOLDGREEN "8. OK\t");
	assert(ft_toupper(224) == toupper(224));
	printf(BOLDGREEN "9. OK\t");
	assert(ft_toupper(' ') == toupper(' '));
	printf(BOLDGREEN "10. OK" RESET "\n");
}
