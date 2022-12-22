/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:26:00 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/21 23:52:48 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strlcat_test(void)
{
	char	str1[29] = "This is a test";
	char	str2[29] = "This is a test";

	printf("ft_strlcat\t");
	assert(ft_strlcat(str1, "test", 0 * sizeof(char)) == strlcat(str2, "test", 0 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "1. OK\t");
	assert(ft_strlcat(str1, "test", 5 * sizeof(char)) == strlcat(str2, "test", 5 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "2. OK\t");
	assert(ft_strlcat(str1 + 4, "?!", 11 * sizeof(char)) == strlcat(str2 + 4, "?!", 11 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "3. OK\t");
	assert(ft_strlcat(str1, "This is a test", strlen(str1) * 2 + 1) == strlcat(str2, "This is a test", strlen(str2) * 2 + 1));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "4. OK\t");
	str1[14] = '\0';
	str2[14] = '\0';
	assert(ft_strlcat(str1, "This is another test", 29 * sizeof(char)) == strlcat(str2, "This is another test", 29 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "5. OK\t");
	str1[14] = '\0';
	str2[14] = '\0';
	assert(ft_strlcat(str1 + 7, str1, 22 * sizeof(char)) == strlcat(str2 + 7, str2, 22 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "6. OK\t");
	str1[14] = '\0';
	str2[14] = '\0';
	assert(ft_strlcat(str1, str1 + 7, 29 * sizeof(char)) == strlcat(str2, str2 + 7, 29 * sizeof(char)));
	assert(!strcmp(str1, str2));
	printf(BOLDGREEN "7. OK" RESET "\n");
}
