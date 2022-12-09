/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:48:06 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 00:20:44 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_tolower_test(void)
{
	printf("ft_tolower\t   |\t\t");
	assert(ft_tolower('A') == tolower('A'));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_tolower('Z') == tolower('Z'));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_tolower('M') == tolower('M'));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_tolower('a') == tolower('a'));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_tolower('z') == tolower('z'));
	printf(BOLDGREEN "5. OK\t");
	assert(ft_tolower('m') == tolower('m'));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_tolower('\0') == tolower('\0'));
	printf(BOLDGREEN "7. OK\t");
	assert(ft_tolower('1') == tolower('1'));
	printf(BOLDGREEN "8. OK\t");
	assert(ft_tolower(224) == tolower(224));
	printf(BOLDGREEN "9. OK\t");
	assert(ft_tolower(' ') == tolower(' '));
	printf(BOLDGREEN "10. OK" RESET "\n");
}
