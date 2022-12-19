/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:48:20 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/19 21:33:31 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstdelone_test(void)
{
	t_list	*lst;
	t_list	*item;

	printf("ft_lstdelone\t");
	lst = ft_lstnew(strdup("0"));
	ft_lstdelone(lst, NULL);
	assert(!strcmp(lst->content, "0"));
	printf(BOLDGREEN "1. OK\t");
	ft_lstdelone(lst, &free);
	printf(BOLDGREEN "2. OK\t");
	lst = ft_lstnew(strdup("0"));
	ft_lstadd_front(&lst, ft_lstnew(strdup("1")));
	ft_lstdelone(lst->next, &free);
	assert(!strcmp(lst->content, "1"));
	printf(BOLDGREEN "3. OK\t");
	ft_lstadd_front(&lst, ft_lstnew(strdup("2")));
	item = lst->next;
	ft_lstdelone(lst, &free);
	assert(!strcmp(item->content, "1"));
	printf(BOLDGREEN "4. OK\t");
	ft_lstdelone(item, &free);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
