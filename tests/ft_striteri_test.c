/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:52:23 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 00:36:35 by abenamar         ###   ########.fr       */
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

	printf("ft_striteri\t   |\t\t");
	str = strdup("");
	ft_striteri(str, &tolower_or_toupper);
	assert(!strcmp(str, ""));
	free(str);
	printf(BOLDGREEN "1. OK\t");
	str = strdup("a");
	ft_striteri(str, &tolower_or_toupper);
	assert(!strcmp(str, "a"));
	free(str);
	printf(BOLDGREEN "2. OK\t");
	str = strdup("A");
	ft_striteri(str, &tolower_or_toupper);
	assert(!strcmp(str, "a"));
	free(str);
	printf(BOLDGREEN "3. OK\t");
	str = strdup("test");
	ft_striteri(str, &tolower_or_toupper);
	assert(!strcmp(str, "tEsT"));
	free(str);
	printf(BOLDGREEN "4. OK\t");
	str = strdup("This is a test");
	ft_striteri(str, &tolower_or_toupper);
	assert(!strcmp(str, "tHiS Is a tEsT"));
	free(str);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
