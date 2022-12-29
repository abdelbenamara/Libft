/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:09:08 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:41:43 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strdup_test(void)
{
	char	*str1;
	char	*str2;

	printf(RESET "\nft_strdup\t");
	str1 = ft_strdup("");
	str2 = strdup("");
	ft_assert(1, !strcmp(str1, str2));
	free(str1);
	free(str2);
	str1 = ft_strdup("test");
	str2 = strdup("test");
	ft_assert(2, !strcmp(str1, str2));
	free(str1);
	free(str2);
	str1 = ft_strdup("This is a test");
	str2 = strdup("This is a test");
	ft_assert(3, !strcmp(str1, str2));
	free(str1);
	free(str2);
	str1 = ft_strdup("This is a test");
	str2 = strdup(str1);
	ft_assert(4, !strcmp(str1, str2));
	free(str1);
	free(str2);
	str2 = strdup("This is a test");
	str1 = ft_strdup(str2);
	ft_assert(5, !strcmp(str1, str2));
	free(str1);
	free(str2);
}
