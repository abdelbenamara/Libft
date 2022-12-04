/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:57:33 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/04 14:50:31 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strjoin_test(void)
{
	char	*str;

	printf("ft_strjoin \t\t\t");
	str = ft_strjoin("", "");
	assert(!strcmp(str, ""));
	free(str);
	printf(BOLDGREEN "1. OK\t");
	str = ft_strjoin("test", "");
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "2. OK\t");
	str = ft_strjoin("", "test");
	assert(!strcmp(str, "test"));
	free(str);
	printf(BOLDGREEN "3. OK\t");
	str = ft_strjoin("test", "test");
	assert(!strcmp(str, "testtest"));
	free(str);
	printf(BOLDGREEN "4. OK\t");
	str = ft_strjoin("This is", " a test");
	assert(!strcmp(str, "This is a test"));
	free(str);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
