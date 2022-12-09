/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:13:18 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 00:09:50 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_isalpha_test(void)
{
	printf("ft_isalpha\t   |\t\t");
	assert(ft_isalpha('A') != 0 && isalpha('A') != 0);
	printf(BOLDGREEN "1. OK\t");
	assert(ft_isalpha('Z') != 0 && isalpha('Z') != 0);
	printf(BOLDGREEN "2. OK\t");
	assert(ft_isalpha('M') != 0 && isalpha('M') != 0);
	printf(BOLDGREEN "3. OK\t");
	assert(ft_isalpha('a') != 0 && isalpha('a') != 0);
	printf(BOLDGREEN "4. OK\t");
	assert(ft_isalpha('z') != 0 && isalpha('z') != 0);
	printf(BOLDGREEN "5. OK\t");
	assert(ft_isalpha('m') != 0 && isalpha('m') != 0);
	printf(BOLDGREEN "6. OK\t");
	assert(ft_isalpha(-1) == 0 && isalpha(-1) == 0);
	printf(BOLDGREEN "7. OK\t");
	assert(ft_isalpha('1') == 0 && isalpha('1') == 0);
	printf(BOLDGREEN "8. OK\t");
	assert(ft_isalpha(224) == 0 && isalpha(224) == 0);
	printf(BOLDGREEN "9. OK\t");
	assert(ft_isalpha(' ') == 0 && isalpha(' ') == 0);
	printf(BOLDGREEN "10. OK" RESET "\n");
}
