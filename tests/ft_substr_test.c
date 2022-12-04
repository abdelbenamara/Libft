/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:52:03 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/04 14:48:41 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_substr_test(void)
{
	char	*str;

	printf("ft_substr \t\t\t");
	str = ft_substr("", 0, 0);
	assert(!strcmp(str, ""));
	free(str);
	printf(BOLDGREEN "1. OK\t");
	str = ft_substr("", 1, 1);
	assert(!strcmp(str, ""));
	free(str);
	printf(BOLDGREEN "2. OK\t");
	str = ft_substr("test", 0, strlen("test"));
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "3. OK\t");
	str = ft_substr("test", 1, strlen("test"));
	assert(!strcmp(str, "est"));
	free(str);
	printf(BOLDGREEN "4. OK\t");
	str = ft_substr("test", 2, 1);
	assert(!strcmp(str, "s"));
	free(str);
	printf(BOLDGREEN "5. OK\t");
	str = ft_substr("This is a test", 5, 2);
	assert(!strcmp(str, "is"));
	free(str);
	printf(BOLDGREEN "6. OK\t");
	str = ft_substr("This test is a test", 5, 4);
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "7. OK\t");
	str = ft_substr("This is another test", 0, strlen("This is another test") + 3);
	assert(!strcmp(str, "This is another test"));
	free(str);
	printf(BOLDGREEN "8. OK" RESET "\n");
}
