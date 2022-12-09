/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:25 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 19:41:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_itoa_test(void)
{
	char	*str;

	printf("ft_itoa\t\t   |\t\t");
	str = ft_itoa(0);
	assert(!strcmp(str, "0"));
	printf(BOLDGREEN "1. OK\t");
	assert(strlen(str) == strlen("0"));
	free(str);
	printf(BOLDGREEN "2. OK\t");
	str = ft_itoa(-0);
	assert(!strcmp(str, "0"));
	printf(BOLDGREEN "3. OK\t");
	assert(strlen(str) == strlen("0"));
	free(str);
	printf(BOLDGREEN "4. OK\t");
	str = ft_itoa(-123);
	assert(!strcmp(str, "-123"));
	printf(BOLDGREEN "5. OK\t");
	assert(strlen(str) == strlen("-123"));
	free(str);
	printf(BOLDGREEN "6. OK\t");
	str = ft_itoa(456);
	assert(!strcmp(str, "456"));
	printf(BOLDGREEN "7. OK\t");
	assert(strlen(str) == strlen("456"));
	free(str);
	printf(BOLDGREEN "8. OK\t");
	str = ft_itoa(-2147483648);
	assert(!strcmp(str, "-2147483648"));
	printf(BOLDGREEN "9. OK\t");
	assert(strlen(str) == strlen("-2147483648"));
	free(str);
	printf(BOLDGREEN "10. OK\t");
	str = ft_itoa(2147483647);
	assert(!strcmp(str, "2147483647"));
	printf(BOLDGREEN "11. OK\t");
	assert(strlen(str) == strlen("2147483647"));
	free(str);
	printf(BOLDGREEN "12. OK\t");
	str = ft_itoa(1000000000);
	assert(!strcmp(str, "1000000000"));
	printf(BOLDGREEN "13. OK\t");
	assert(strlen(str) == strlen("1000000000"));
	free(str);
	printf(BOLDGREEN "14. OK" RESET "\n");
}
