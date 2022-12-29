/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:14:49 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:00:07 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		++i;
	}
	free(split);
}

void	ft_split_test(void)
{
	char	**strs;

	printf(RESET "\nft_split\t");
	strs = ft_split("", ' ');
	ft_assert(1, strs[0] == NULL);
	free_split(strs);
	strs = ft_split("test", ' ');
	ft_assert(2, !strcmp(strs[0], "test"));
	free_split(strs);
	strs = ft_split("te st", ' ');
	ft_assert(3, (!strcmp(strs[0], "te") && !strcmp(strs[1], "st")));
	free_split(strs);
	strs = ft_split("t e s t", ' ');
	ft_assert(4, (!strcmp(strs[0], "t") && !strcmp(strs[1], "e") && !strcmp(strs[2], "s") && !strcmp(strs[3], "t")));
	free_split(strs);
	strs = ft_split(" test", ' ');
	ft_assert(5, !strcmp(strs[0], "test"));
	free_split(strs);
	strs = ft_split("test ", ' ');
	ft_assert(6, !strcmp(strs[0], "test"));
	free_split(strs);
	strs = ft_split(" test ", ' ');
	ft_assert(7, !strcmp(strs[0], "test"));
	free_split(strs);
	strs = ft_split("   test   ", ' ');
	ft_assert(8, !strcmp(strs[0], "test"));
	free_split(strs);
	strs = ft_split("te   st", ' ');
	ft_assert(9, (!strcmp(strs[0], "te") && !strcmp(strs[1], "st")));
	free_split(strs);
	strs = ft_split("   This is   ...   a test   ", ' ');
	ft_assert(10, (!strcmp(strs[0], "This") && !strcmp(strs[1], "is") && !strcmp(strs[2], "...") && !strcmp(strs[3], "a") && !strcmp(strs[4], "test")));
	free_split(strs);
}
