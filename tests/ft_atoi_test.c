/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:21:41 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 00:32:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_atoi_test(void)
{
	printf("ft_atoi\t\t   |\t\t");
	assert(ft_atoi("") == atoi(""));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_atoi("0") == atoi("0"));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_atoi(" ") == atoi(" "));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_atoi("123a456") == atoi("123a456"));
	printf(BOLDGREEN "4. OK\t");
	assert(ft_atoi("+123 ") == atoi("+123 "));
	printf(BOLDGREEN "5. OK\t");
	assert(ft_atoi("-123\b") == atoi("-123\b"));
	printf(BOLDGREEN "6. OK\t");
	assert(ft_atoi("    123") == atoi("    123"));
	printf(BOLDGREEN "7. OK\t");
	assert(ft_atoi(" \t\n\v\f\r+123") == atoi(" \t\n\v\f\r+123"));
	printf(BOLDGREEN "8. OK\t");
	assert(ft_atoi("z-123") == atoi("z-123"));
	printf(BOLDGREEN "9. OK\t");
	assert(ft_atoi("-2147483648") == atoi("-2147483648"));
	printf(BOLDGREEN "10. OK\t");
	assert(ft_atoi("+2147483647") == atoi("+2147483647"));
	printf(BOLDGREEN "11. OK\t");
	assert(ft_atoi("-2147483649") == atoi("-2147483649"));
	printf(BOLDGREEN "12. OK\t");
	assert(ft_atoi("+2147483648") == atoi("+2147483648"));
	printf(BOLDGREEN "13. OK\t");
	assert(ft_atoi("    0000789   ") == atoi("    0000789   "));
	printf(BOLDGREEN "14. OK" RESET "\n");
}
