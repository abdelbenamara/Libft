/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:07:53 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:35:16 by abenamar         ###   ########.fr       */
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

	printf(RESET "\nft_lstiter\t");
	lst = ft_lstnew(strdup("A"));
	ft_lstiter(lst, NULL);
	ft_assert(1, !strcmp(lst->content, "A"));
	ft_lstiter(lst, &tolower_or_toupper);
	ft_assert(2, !strcmp(lst->content, "a"));
	*(char *)(lst->content) = 'A';
	ft_lstadd_back(&lst, ft_lstnew(strdup("ABC")));
	ft_lstiter(lst->next, &tolower_or_toupper);
	ft_assert(3, (!strcmp(lst->content, "A") && !strcmp(lst->next->content, "aBc")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("test")));
	ft_lstiter(lst, &tolower_or_toupper);
	ft_assert(4, (!strcmp(lst->content, "a") && !strcmp(lst->next->content, "aBc") && !strcmp(lst->next->next->content, "tEsT")));
	ft_lstclear(&lst, &free);
	ft_lstiter(lst, &tolower_or_toupper);
	ft_assert(5, lst == NULL);
}
