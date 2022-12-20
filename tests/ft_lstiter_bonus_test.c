/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:07:53 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/20 07:25:35 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	tolower_or_toupper(void *content)
{
	int		i;
	char	*c;
	
	if (!content)
		return ;
	i = 0;
	c = (char *) content;
	while (*c)
	{
		if (i % 2 == 0 && 'A' <= *c && *c <= 'Z')
			*c += 32;
		else if (i % 2 != 0 && 'a' <= *c && *c <= 'z')
			*c -= 32;
		++i;
		++c;
	}
}

void	ft_lstiter_test(void)
{
	t_list	*lst;

	printf("ft_lstiter\t");
	lst = ft_lstnew(strdup("A"));
	ft_lstiter(lst, NULL);
	assert(!strcmp(lst->content, "A"));
	printf(BOLDGREEN "1. OK\t");
	ft_lstiter(lst, &tolower_or_toupper);
	assert(!strcmp(lst->content, "a"));
	printf(BOLDGREEN "2. OK\t");
	*(char *)(lst->content) = 'A';
	ft_lstadd_back(&lst, ft_lstnew(strdup("ABC")));
	ft_lstiter(lst->next, &tolower_or_toupper);
	assert(!strcmp(lst->content, "A"));
	assert(!strcmp(lst->next->content, "aBc"));
	printf(BOLDGREEN "3. OK\t");
	ft_lstadd_back(&lst, ft_lstnew(strdup("test")));
	ft_lstiter(lst, &tolower_or_toupper);
	assert(!strcmp(lst->content, "a"));
	assert(!strcmp(lst->next->content, "aBc"));
	assert(!strcmp(lst->next->next->content, "tEsT"));
	printf(BOLDGREEN "4. OK\t");
	ft_lstclear(&lst, &free);
	ft_lstiter(lst, &tolower_or_toupper);
	assert(lst == NULL);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
