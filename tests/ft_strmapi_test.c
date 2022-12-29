/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:26:34 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:02:14 by abenamar         ###   ########.fr       */
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

	printf(RESET "\nft_strmapi\t");
	str = ft_strmapi("", &tolower_or_toupper);
	ft_assert(1, !strcmp(str, ""));
	free(str);
	str = ft_strmapi("a", &tolower_or_toupper);
	ft_assert(2, !strcmp(str, "a"));
	free(str);
	str = ft_strmapi("A", &tolower_or_toupper);
	ft_assert(3, !strcmp(str, "a"));
	free(str);
	str = ft_strmapi("test", &tolower_or_toupper);
	ft_assert(4, !strcmp(str, "tEsT"));
	free(str);
	str = ft_strmapi("This is a test", &tolower_or_toupper);
	ft_assert(5, !strcmp(str, "tHiS Is a tEsT"));
	free(str);
}
