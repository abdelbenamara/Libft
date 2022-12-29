/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:52:23 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:02:53 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	tolower_or_toupper(unsigned int i, char *c)
{
	if (i % 2 == 0 && 'A' <= *c && *c <= 'Z')
		*c += 32;
	else if (i % 2 != 0 && 'a' <= *c && *c <= 'z')
		*c -= 32;
}

void	ft_striteri_test(void)
{
	char	*str;

	printf(RESET "\nft_striteri\t");
	str = strdup("");
	ft_striteri(str, &tolower_or_toupper);
	ft_assert(1, !strcmp(str, ""));
	free(str);
	str = strdup("a");
	ft_striteri(str, &tolower_or_toupper);
	ft_assert(2, !strcmp(str, "a"));
	free(str);
	str = strdup("A");
	ft_striteri(str, &tolower_or_toupper);
	ft_assert(3, !strcmp(str, "a"));
	free(str);
	str = strdup("test");
	ft_striteri(str, &tolower_or_toupper);
	ft_assert(4, !strcmp(str, "tEsT"));
	free(str);
	str = strdup("This is a test");
	ft_striteri(str, &tolower_or_toupper);
	ft_assert(5, !strcmp(str, "tHiS Is a tEsT"));
	free(str);
}
