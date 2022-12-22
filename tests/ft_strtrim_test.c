/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:16:07 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 19:17:49 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strtrim_test(void)
{
	char	*str;

	printf("ft_strtrim\t");
	str = ft_strtrim("", "");
	assert(!strcmp(str, ""));
	free(str);
	printf(BOLDGREEN "1. OK\t");
	str = ft_strtrim("test", "");
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "2. OK\t");
	str = ft_strtrim("", "test");
	assert(!strcmp(str, ""));
	free(str);
	printf(BOLDGREEN "3. OK\t");
	str = ft_strtrim("test", "abc");
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "4. OK\t");
	str = ft_strtrim(" test", " ");
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "5. OK\t");
	str = ft_strtrim("test ", " ");
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "6. OK\t");
	str = ft_strtrim(" test ", " ");
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "7. OK\t");
	str = ft_strtrim("     test           ", "   ");
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "8. OK\t");
	str = ft_strtrim(" abc a b c a b c test abc abc a b c ", "abc ");
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "9. OK\t");
	str = ft_strtrim("   This is a test with 'abc ' in it   ", "abc ");
	assert(!strcmp(str, "This is a test with 'abc ' in it"));
	free(str);
	printf(BOLDGREEN "10. OK" RESET "\n");
}
