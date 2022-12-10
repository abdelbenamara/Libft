/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:26:34 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 20:30:17 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static char	tolower_or_toupper(unsigned int i, char c)
{
	if (i % 2 == 0 && 'A' <= c && c <= 'Z')
		c += 32;
	else if (i % 2 != 0 && 'a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

void	ft_strmapi_test(void)
{
	char	*str;

	printf("ft_strmapi\t");
	str = ft_strmapi("", &tolower_or_toupper);
	assert(!strcmp(str, ""));
	free(str);
	printf(BOLDGREEN "1. OK\t");
	str = ft_strmapi("a", &tolower_or_toupper);
	assert(!strcmp(str, "a"));
	free(str);
	printf(BOLDGREEN "2. OK\t");
	str = ft_strmapi("A", &tolower_or_toupper);
	assert(!strcmp(str, "a"));
	free(str);
	printf(BOLDGREEN "3. OK\t");
	str = ft_strmapi("test", &tolower_or_toupper);
	assert(!strcmp(str, "tEsT"));
	free(str);
	printf(BOLDGREEN "4. OK\t");
	str = ft_strmapi("This is a test", &tolower_or_toupper);
	assert(!strcmp(str, "tHiS Is a tEsT"));
	free(str);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
