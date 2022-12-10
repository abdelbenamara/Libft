/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:09:08 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 20:23:18 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strdup_test(void)
{
	char	*str1;
	char	*str2;

	printf("ft_strdup\t");
	str1 = ft_strdup("");
	str2 = strdup("");
	assert(!strcmp(str1, str2));
	free(str1);
	free(str2);
	printf(BOLDGREEN "1. OK\t");
	str1 = ft_strdup("test");
	str2 = strdup("test");
	assert(!strcmp(str1, str2));
	free(str1);
	free(str2);
	printf(BOLDGREEN "2. OK\t");
	str1 = ft_strdup("This is a test");
	str2 = strdup("This is a test");
	assert(!strcmp(str1, str2));
	free(str1);
	free(str2);
	printf(BOLDGREEN "3. OK\t");
	str1 = ft_strdup("This is a test");
	str2 = strdup(str1);
	assert(!strcmp(str1, str2));
	free(str1);
	free(str2);
	printf(BOLDGREEN "4. OK\t");
	str2 = strdup("This is a test");
	str1 = ft_strdup(str2);
	assert(!strcmp(str1, str2));
	free(str1);
	free(str2);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
