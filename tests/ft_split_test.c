/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:14:49 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 00:35:42 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_split_test(void)
{
	char	**strs;

	printf("ft_split\t   |\t\t");
	strs = ft_split("", ' ');
	assert(strs[0] == NULL);
	free(strs[0]);
	free(strs);
	printf(BOLDGREEN "1. OK\t");
	strs = ft_split("test", ' ');
	assert(!strcmp(strs[0], "test"));
	free(strs[0]);
	free(strs);
	printf(BOLDGREEN "2. OK\t");
	strs = ft_split("te st", ' ');
	assert(!strcmp(strs[0], "te"));
	free(strs[0]);
	assert(!strcmp(strs[1], "st"));
	free(strs[1]);
	free(strs);
	printf(BOLDGREEN "3. OK\t");
	strs = ft_split("t e s t", ' ');
	assert(!strcmp(strs[0], "t"));
	free(strs[0]);
	assert(!strcmp(strs[1], "e"));
	free(strs[1]);
	assert(!strcmp(strs[2], "s"));
	free(strs[2]);
	assert(!strcmp(strs[3], "t"));
	free(strs[3]);
	free(strs);
	printf(BOLDGREEN "4. OK\t");
	strs = ft_split(" test", ' ');
	assert(!strcmp(strs[0], "test"));
	free(strs[0]);
	free(strs);
	printf(BOLDGREEN "5. OK\t");
	strs = ft_split("test ", ' ');
	assert(!strcmp(strs[0], "test"));
	free(strs[0]);
	free(strs);
	printf(BOLDGREEN "6. OK\t");
	strs = ft_split(" test ", ' ');
	assert(!strcmp(strs[0], "test"));
	free(strs[0]);
	free(strs);
	printf(BOLDGREEN "7. OK\t");
	strs = ft_split("   test   ", ' ');
	assert(!strcmp(strs[0], "test"));
	free(strs[0]);
	free(strs);
	printf(BOLDGREEN "8. OK\t");
	strs = ft_split("te   st", ' ');
	assert(!strcmp(strs[0], "te"));
	free(strs[0]);
	assert(!strcmp(strs[1], "st"));
	free(strs[1]);
	free(strs);
	printf(BOLDGREEN "9. OK\t");
	strs = ft_split("   This is   ...   a test   ", ' ');
	assert(!strcmp(strs[0], "This"));
	free(strs[0]);
	assert(!strcmp(strs[1], "is"));
	free(strs[1]);
	assert(!strcmp(strs[2], "..."));
	free(strs[2]);
	assert(!strcmp(strs[3], "a"));
	free(strs[3]);
	assert(!strcmp(strs[4], "test"));
	free(strs[4]);
	free(strs);
	printf(BOLDGREEN "10. OK" RESET "\n");
}
