/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:39:49 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 19:51:45 by abenamar         ###   ########.fr       */
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

	printf("ft_lstmap\t");
	new = ft_lstmap(NULL, NULL, NULL);
	assert(new == NULL);
	printf(BOLDGREEN "1. OK\t");
	new = ft_lstmap(NULL, &tolower_or_toupper, &free);
	assert(new == NULL);
	printf(BOLDGREEN "2. OK\t");
	lst = ft_lstnew(strdup("A"));
	new = ft_lstmap(lst, NULL, &free);
	assert(!strcmp(lst->content, "A"));
	assert(new == NULL);
	printf(BOLDGREEN "3. OK\t");
	new = ft_lstmap(lst, &tolower_or_toupper, NULL);
	assert(!strcmp(lst->content, "A"));
	assert(new == NULL);
	printf(BOLDGREEN "4. OK\t");
	new = ft_lstmap(lst, &tolower_or_toupper, &free);
	assert(!strcmp(lst->content, "A"));
	assert(!strcmp(new->content, "a"));
	ft_lstclear(&new, &free);
	printf(BOLDGREEN "5. OK\t");
	ft_lstadd_back(&lst, ft_lstnew(strdup("ABC")));
	new = ft_lstmap(lst->next, &tolower_or_toupper, &free);
	assert(!strcmp(lst->content, "A"));
	assert(!strcmp(lst->next->content, "ABC"));
	assert(!strcmp(new->content, "aBc"));
	ft_lstclear(&new, &free);
	printf(BOLDGREEN "6. OK\t");
	ft_lstadd_back(&lst, ft_lstnew(strdup("test")));
	new = ft_lstmap(lst, &tolower_or_toupper, &free);
	assert(!strcmp(lst->content, "A"));
	assert(!strcmp(lst->next->content, "ABC"));
	assert(!strcmp(lst->next->next->content, "test"));
	assert(!strcmp(new->content, "a"));
	assert(!strcmp(new->next->content, "aBc"));
	assert(!strcmp(new->next->next->content, "tEsT"));
	ft_lstclear(&lst, &free);
	ft_lstclear(&new, &free);
	printf(BOLDGREEN "7. OK" RESET "\n");
}
