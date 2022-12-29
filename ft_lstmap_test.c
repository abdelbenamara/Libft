/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:39:49 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:37:21 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	*tolower_or_toupper(void *content)
{
	int		i;
	char	*s;
	
	if (!content)
		return (NULL);
	i = 0;
	s = strdup(content);
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (i % 2 == 0 && 'A' <= s[i] && s[i] <= 'Z')
			s[i] += 32;
		else if (i % 2 != 0 && 'a' <= s[i] && s[i] <= 'z')
			s[i] -= 32;
		++i;
	}
	return (s);
}

void	ft_lstmap_test(void)
{
	t_list	*lst;
	t_list	*new;

	printf(RESET "\nft_lstmap\t");
	new = ft_lstmap(NULL, NULL, NULL);
	ft_assert(1, new == NULL);
	new = ft_lstmap(NULL, &tolower_or_toupper, &free);
	ft_assert(2, new == NULL);
	lst = ft_lstnew(strdup("A"));
	new = ft_lstmap(lst, NULL, &free);
	ft_assert(3, (!strcmp(lst->content, "A") && new == NULL));
	new = ft_lstmap(lst, &tolower_or_toupper, NULL);
	ft_assert(4, (!strcmp(lst->content, "A") && new == NULL));
	new = ft_lstmap(lst, &tolower_or_toupper, &free);
	ft_assert(5, (!strcmp(lst->content, "A") && !strcmp(new->content, "a")));
	ft_lstclear(&new, &free);
	ft_lstadd_back(&lst, ft_lstnew(strdup("ABC")));
	new = ft_lstmap(lst->next, &tolower_or_toupper, &free);
	ft_assert(6, (!strcmp(lst->content, "A") && !strcmp(lst->next->content, "ABC") && !strcmp(new->content, "aBc")));
	ft_lstclear(&new, &free);
	ft_lstadd_back(&lst, ft_lstnew(strdup("test")));
	new = ft_lstmap(lst, &tolower_or_toupper, &free);
	ft_assert(7, (!strcmp(lst->content, "A") && !strcmp(lst->next->content, "ABC") && !strcmp(lst->next->next->content, "test") 
				&& !strcmp(new->content, "a") && !strcmp(new->next->content, "aBc") && !strcmp(new->next->next->content, "tEsT")));
	ft_lstclear(&lst, &free);
	ft_lstclear(&new, &free);
}
