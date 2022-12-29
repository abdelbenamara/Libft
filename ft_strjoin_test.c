/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:57:33 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:46:54 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_strjoin_test(void)
{
	char	*str;

	printf(RESET "\nft_strjoin\t");
	str = ft_strjoin("", "");
	ft_assert(1, !strcmp(str, ""));
	free(str);
	str = ft_strjoin("test", "");
	ft_assert(2, !strcmp(str, "test"));
	free(str);
	str = ft_strjoin("", "test");
	ft_assert(3, !strcmp(str, "test"));
	free(str);
	str = ft_strjoin("test", "test");
	ft_assert(4, !strcmp(str, "testtest"));
	free(str);
	str = ft_strjoin("This is", " a test");
	ft_assert(5, !strcmp(str, "This is a test"));
	free(str);
}
